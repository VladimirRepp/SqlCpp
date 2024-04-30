#pragma once

#include "FEntry.h"
#include "DbApplicantContext.h"
#include "Utilities.h"

namespace StudentDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FData
	/// </summary>
	public ref class FData : public System::Windows::Forms::Form
	{
	public:
		FData(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_Fullname;
	private: System::Windows::Forms::ComboBox^ comboBox_Med;
	private: System::Windows::Forms::ComboBox^ comboBox_SNILS;
	private: System::Windows::Forms::ComboBox^ comboBox_Passport;



	private: System::Windows::Forms::ComboBox^ comboBox_Gender;
	private: System::Windows::Forms::TextBox^ textBox_AvrScore;
	private: System::Windows::Forms::TextBox^ textBox_DateBirth;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button_Add;
	private: System::Windows::Forms::Button^ button_Delete;

	private: System::Windows::Forms::Button^ button_Edit;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;










	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Edit = (gcnew System::Windows::Forms::Button());
			this->button_Add = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox_Med = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_SNILS = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Passport = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Gender = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_AvrScore = (gcnew System::Windows::Forms::TextBox());
			this->textBox_DateBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Fullname = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->назадToolStripMenuItem,
					this->выйтиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1258, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->назадToolStripMenuItem->Text = L"Назад";
			this->назадToolStripMenuItem->Click += gcnew System::EventHandler(this, &FData::назадToolStripMenuItem_Click);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &FData::выйтиToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1258, 600);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1250, 571);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Редактирование";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button_Delete);
			this->groupBox2->Controls->Add(this->button_Edit);
			this->groupBox2->Controls->Add(this->button_Add);
			this->groupBox2->Location = System::Drawing::Point(286, 239);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(569, 139);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Действия";
			// 
			// button_Delete
			// 
			this->button_Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Delete->Location = System::Drawing::Point(376, 44);
			this->button_Delete->Name = L"button_Delete";
			this->button_Delete->Size = System::Drawing::Size(162, 48);
			this->button_Delete->TabIndex = 2;
			this->button_Delete->Text = L"Удалить";
			this->button_Delete->UseVisualStyleBackColor = true;
			this->button_Delete->Click += gcnew System::EventHandler(this, &FData::button_Delete_Click);
			// 
			// button_Edit
			// 
			this->button_Edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Edit->Location = System::Drawing::Point(208, 44);
			this->button_Edit->Name = L"button_Edit";
			this->button_Edit->Size = System::Drawing::Size(162, 48);
			this->button_Edit->TabIndex = 1;
			this->button_Edit->Text = L"Изменить";
			this->button_Edit->UseVisualStyleBackColor = true;
			this->button_Edit->Click += gcnew System::EventHandler(this, &FData::button_Edit_Click);
			// 
			// button_Add
			// 
			this->button_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Add->Location = System::Drawing::Point(40, 44);
			this->button_Add->Name = L"button_Add";
			this->button_Add->Size = System::Drawing::Size(162, 48);
			this->button_Add->TabIndex = 0;
			this->button_Add->Text = L"Добавить";
			this->button_Add->UseVisualStyleBackColor = true;
			this->button_Add->Click += gcnew System::EventHandler(this, &FData::button_Add_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->Controls->Add(this->comboBox_Med);
			this->groupBox1->Controls->Add(this->comboBox_SNILS);
			this->groupBox1->Controls->Add(this->comboBox_Passport);
			this->groupBox1->Controls->Add(this->comboBox_Gender);
			this->groupBox1->Controls->Add(this->textBox_AvrScore);
			this->groupBox1->Controls->Add(this->textBox_DateBirth);
			this->groupBox1->Controls->Add(this->textBox_Fullname);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1244, 230);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поле ввода";
			// 
			// comboBox_Med
			// 
			this->comboBox_Med->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_Med->FormattingEnabled = true;
			this->comboBox_Med->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->comboBox_Med->Location = System::Drawing::Point(882, 131);
			this->comboBox_Med->Name = L"comboBox_Med";
			this->comboBox_Med->Size = System::Drawing::Size(329, 37);
			this->comboBox_Med->TabIndex = 11;
			// 
			// comboBox_SNILS
			// 
			this->comboBox_SNILS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_SNILS->FormattingEnabled = true;
			this->comboBox_SNILS->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->comboBox_SNILS->Location = System::Drawing::Point(882, 84);
			this->comboBox_SNILS->Name = L"comboBox_SNILS";
			this->comboBox_SNILS->Size = System::Drawing::Size(329, 37);
			this->comboBox_SNILS->TabIndex = 10;
			// 
			// comboBox_Passport
			// 
			this->comboBox_Passport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_Passport->FormattingEnabled = true;
			this->comboBox_Passport->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->comboBox_Passport->Location = System::Drawing::Point(882, 38);
			this->comboBox_Passport->Name = L"comboBox_Passport";
			this->comboBox_Passport->Size = System::Drawing::Size(329, 37);
			this->comboBox_Passport->TabIndex = 9;
			// 
			// comboBox_Gender
			// 
			this->comboBox_Gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_Gender->FormattingEnabled = true;
			this->comboBox_Gender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Муж", L"Жен" });
			this->comboBox_Gender->Location = System::Drawing::Point(247, 84);
			this->comboBox_Gender->Name = L"comboBox_Gender";
			this->comboBox_Gender->Size = System::Drawing::Size(329, 37);
			this->comboBox_Gender->TabIndex = 8;
			// 
			// textBox_AvrScore
			// 
			this->textBox_AvrScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_AvrScore->Location = System::Drawing::Point(247, 175);
			this->textBox_AvrScore->Name = L"textBox_AvrScore";
			this->textBox_AvrScore->Size = System::Drawing::Size(329, 34);
			this->textBox_AvrScore->TabIndex = 7;
			// 
			// textBox_DateBirth
			// 
			this->textBox_DateBirth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_DateBirth->Location = System::Drawing::Point(247, 131);
			this->textBox_DateBirth->Name = L"textBox_DateBirth";
			this->textBox_DateBirth->Size = System::Drawing::Size(329, 34);
			this->textBox_DateBirth->TabIndex = 6;
			// 
			// textBox_Fullname
			// 
			this->textBox_Fullname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_Fullname->Location = System::Drawing::Point(247, 38);
			this->textBox_Fullname->Name = L"textBox_Fullname";
			this->textBox_Fullname->Size = System::Drawing::Size(329, 34);
			this->textBox_Fullname->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(601, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(267, 29);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Медицинская справка:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(30, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 29);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Средний балл:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(601, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Копия снилс:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(30, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(199, 29);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Дата рождения:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(601, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Копия паспорта:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пол:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1250, 571);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Просмотр";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column7, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(3, 3);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(1244, 565);
			this->dataGridView->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ФИО";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Пол";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Дата рождения";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Средний балл";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Копия паспорта";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Копия снилс";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Медицинская справка";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// FData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1258, 628);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор данных";
			this->Load += gcnew System::EventHandler(this, &FData::FData_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: DbApplicantContext^ _dbApplicant;

private: void LoadAndView(bool isLoad);

private: System::Void FData_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Edit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Delete_Click(System::Object^ sender, System::EventArgs^ e);
};
}
