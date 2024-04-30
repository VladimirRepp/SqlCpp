#include "FData.h"

StudentDatabase::FData::FData(void)
{
	InitializeComponent();
	_dbApplicant = gcnew DbApplicantContext();
}

void StudentDatabase::FData::LoadAndView(bool isLoad)
{
	try {
		if (isLoad)
			_dbApplicant->Query_Select();

		dataGridView->Rows->Clear();

		int i = 0;
		for each (auto d in _dbApplicant->Data)
		{
			dataGridView->Rows->Add(d->ToListStr->ToArray());
			dataGridView->Rows[i++]->HeaderCell->Value = d->Id.ToString();
		}
	}
	catch (Exception^ ex) {
		Messager::ExceptionMessage(ex->Message);
	}
}

System::Void StudentDatabase::FData::FData_Load(System::Object^ sender, System::EventArgs^ e)
{
	LoadAndView(true);
}

System::Void StudentDatabase::FData::íàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Âåğíóòüñÿ íàçàä?", "Âíèìàíèå!", MessageBoxButtons::YesNo) != Windows::Forms::DialogResult::Yes)
		return;

	auto form = gcnew FEntry();
	form->Show();
	this->Hide();
}

System::Void StudentDatabase::FData::âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Ïğîäîëæèòü âûõîä?", "Âíèìàíèå!", MessageBoxButtons::YesNo) != Windows::Forms::DialogResult::Yes)
		return;

	Application::Exit();
}

System::Void StudentDatabase::FData::button_Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox_AvrScore->Text == "" || textBox_DateBirth->Text == "" || textBox_Fullname->Text == "" || 
		comboBox_SNILS->SelectedIndex == -1 || comboBox_Gender->SelectedIndex == -1 ||
		comboBox_Med->SelectedIndex == -1 || comboBox_Passport->SelectedIndex == -1) {
		Messager::WarningMessage("Íå âñå ïîëÿ ââåäåíû!");
		return;
	}

	try {
		auto item = gcnew MApplicant();
		item->AvrScore = textBox_AvrScore->Text;
		item->CopyMed = comboBox_Med->Text;
		item->CopyPassport = comboBox_Passport->Text;
		item->CopySNILS = comboBox_SNILS->Text;
		item->DateBirth = textBox_DateBirth->Text;
		item->Fullname = textBox_Fullname->Text;
		item->Gender = comboBox_Gender->Text;

		if (_dbApplicant->Query_Insert(item)) {
			LoadAndView(true);
			Messager::WarningMessage("Äàííûå äîáàâëåíû!");
		}
	}
	catch (Exception^ ex) {
		Messager::ExceptionMessage(ex->Message);
	}
}

System::Void StudentDatabase::FData::button_Edit_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView->CurrentRow->Index == -1) {
		Messager::WarningMessage("Âûáåğèòå ñòğîêó â òàáëèöå!");
		return;
	}

	if (textBox_AvrScore->Text == "" || textBox_DateBirth->Text == "" || textBox_Fullname->Text == "" ||
		comboBox_SNILS->SelectedIndex == -1 || comboBox_Gender->SelectedIndex == -1 ||
		comboBox_Med->SelectedIndex == -1 || comboBox_Passport->SelectedIndex == -1) {
		Messager::WarningMessage("Íå âñå ïîëÿ ââåäåíû!");
		return;
	}

	try {
		auto item = gcnew MApplicant();
		item->Id = Convert::ToInt32(dataGridView->CurrentRow->HeaderCell->Value);
		item->AvrScore = textBox_AvrScore->Text;
		item->CopyMed = comboBox_Med->Text;
		item->CopyPassport = comboBox_Passport->Text;
		item->CopySNILS = comboBox_SNILS->Text;
		item->DateBirth = textBox_DateBirth->Text;
		item->Fullname = textBox_Fullname->Text;
		item->Gender = comboBox_Gender->Text;

		if (_dbApplicant->Query_Update(item)) {
			LoadAndView(false);
			Messager::WarningMessage("Äàííûå èçìåíåíû!");
		}
	}
	catch (Exception^ ex) {
		Messager::ExceptionMessage(ex->Message);
	}
}

System::Void StudentDatabase::FData::button_Delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView->CurrentRow->Index == -1) {
		Messager::WarningMessage("Âûáåğèòå ñòğîêó â òàáëèöå!");
		return;
	}

	try {
		int id = Convert::ToInt32(dataGridView->CurrentRow->HeaderCell->Value);

		if (_dbApplicant->Query_Delete(id)) {
			LoadAndView(false);
			Messager::WarningMessage("Äàííûå óäàëåíû!");
		}
	}
	catch (Exception^ ex) {
		Messager::ExceptionMessage(ex->Message);
	}
}
