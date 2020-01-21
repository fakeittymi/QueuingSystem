#pragma once
#include "pch.h"
#include "Generator.h"
#include "Processor.h"
#include <ctype.h>
#include <string>



namespace Program {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up resources
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ commonDayRequstCountLabel;

	private: System::Windows::Forms::Label^ workDayCountLabel;
	private: System::Windows::Forms::TextBox^ commonDayRequestCountTextBox;


	private: System::Windows::Forms::TextBox^ workDayCountTextBox;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::ListBox^ resultListBox;
	private: System::Windows::Forms::Label^ averageBaleAmountLabel;

	private: System::Windows::Forms::TextBox^ baleCountTextBox;

	private: System::Windows::Forms::Label^ baleCountLabel;
	private: System::Windows::Forms::ListBox^ listBox1;





	protected:

	protected:

	private:
		/// <summary>
		/// Mandatory design variable
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for designer support
		/// The content of the method must not be changed with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->baleCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->baleCountLabel = (gcnew System::Windows::Forms::Label());
			this->commonDayRequstCountLabel = (gcnew System::Windows::Forms::Label());
			this->workDayCountLabel = (gcnew System::Windows::Forms::Label());
			this->commonDayRequestCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->workDayCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->averageBaleAmountLabel = (gcnew System::Windows::Forms::Label());
			this->resultListBox = (gcnew System::Windows::Forms::ListBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->baleCountTextBox);
			this->groupBox1->Controls->Add(this->baleCountLabel);
			this->groupBox1->Controls->Add(this->commonDayRequstCountLabel);
			this->groupBox1->Controls->Add(this->workDayCountLabel);
			this->groupBox1->Controls->Add(this->commonDayRequestCountTextBox);
			this->groupBox1->Controls->Add(this->workDayCountTextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 314);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// baleCountTextBox
			// 
			this->baleCountTextBox->Location = System::Drawing::Point(38, 251);
			this->baleCountTextBox->Name = L"baleCountTextBox";
			this->baleCountTextBox->Size = System::Drawing::Size(100, 20);
			this->baleCountTextBox->TabIndex = 5;
			this->baleCountTextBox->Text = L"8";
			this->baleCountTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::baleCountTextBox_KeyPress);
			// 
			// baleCountLabel
			// 
			this->baleCountLabel->AutoSize = true;
			this->baleCountLabel->Location = System::Drawing::Point(35, 218);
			this->baleCountLabel->Name = L"baleCountLabel";
			this->baleCountLabel->Size = System::Drawing::Size(152, 13);
			this->baleCountLabel->TabIndex = 4;
			this->baleCountLabel->Text = L"Количесвто закупаемых кип";
			// 
			// commonDayRequstCountLabel
			// 
			this->commonDayRequstCountLabel->Location = System::Drawing::Point(35, 118);
			this->commonDayRequstCountLabel->Name = L"commonDayRequstCountLabel";
			this->commonDayRequstCountLabel->Size = System::Drawing::Size(131, 40);
			this->commonDayRequstCountLabel->TabIndex = 3;
			this->commonDayRequstCountLabel->Text = L"Средняя потребность в газетах постоянных покупателей";
			// 
			// workDayCountLabel
			// 
			this->workDayCountLabel->Location = System::Drawing::Point(35, 37);
			this->workDayCountLabel->Name = L"workDayCountLabel";
			this->workDayCountLabel->Size = System::Drawing::Size(131, 32);
			this->workDayCountLabel->TabIndex = 2;
			this->workDayCountLabel->Text = L"Количество дней работы симуляции";
			// 
			// commonDayRequestCountTextBox
			// 
			this->commonDayRequestCountTextBox->Location = System::Drawing::Point(38, 171);
			this->commonDayRequestCountTextBox->Name = L"commonDayRequestCountTextBox";
			this->commonDayRequestCountTextBox->Size = System::Drawing::Size(100, 20);
			this->commonDayRequestCountTextBox->TabIndex = 1;
			this->commonDayRequestCountTextBox->Text = L"175";
			this->commonDayRequestCountTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::commonDayRequestCountTextBox_KeyPress);
			// 
			// workDayCountTextBox
			// 
			this->workDayCountTextBox->Location = System::Drawing::Point(38, 72);
			this->workDayCountTextBox->Name = L"workDayCountTextBox";
			this->workDayCountTextBox->Size = System::Drawing::Size(100, 20);
			this->workDayCountTextBox->TabIndex = 0;
			this->workDayCountTextBox->Text = L"1";
			this->workDayCountTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::workDayCountTextBox_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->averageBaleAmountLabel);
			this->groupBox2->Controls->Add(this->resultListBox);
			this->groupBox2->Location = System::Drawing::Point(232, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(322, 415);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результаты работы симуляции";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 327);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(306, 82);
			this->listBox1->TabIndex = 4;
			// 
			// averageBaleAmountLabel
			// 
			this->averageBaleAmountLabel->AutoSize = true;
			this->averageBaleAmountLabel->Location = System::Drawing::Point(3, 301);
			this->averageBaleAmountLabel->Name = L"averageBaleAmountLabel";
			this->averageBaleAmountLabel->Size = System::Drawing::Size(65, 13);
			this->averageBaleAmountLabel->TabIndex = 3;
			this->averageBaleAmountLabel->Text = L"Статистика";
			// 
			// resultListBox
			// 
			this->resultListBox->FormattingEnabled = true;
			this->resultListBox->Location = System::Drawing::Point(6, 19);
			this->resultListBox->Name = L"resultListBox";
			this->resultListBox->Size = System::Drawing::Size(310, 277);
			this->resultListBox->TabIndex = 1;
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(75, 370);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(75, 23);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Старт";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &Form1::startButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 439);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Газетный киоск";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {

		int _workDayCount = 1;
		int _commonDayRequestCount = 175;
		int _baleCount = 8;
		if (workDayCountTextBox->Text != "") {
			_workDayCount = Convert::ToInt32(workDayCountTextBox->Text);
		}
		
		if (commonDayRequestCountTextBox->Text != "") {
			_commonDayRequestCount = Convert::ToInt32(commonDayRequestCountTextBox->Text);
		}

		if (baleCountTextBox->Text != "") {
			_baleCount = Convert::ToInt32(baleCountTextBox->Text);
		}

		StatisticManager statisticManager;
		Generator generator(_commonDayRequestCount);
		Processor processor(statisticManager, generator, _workDayCount, _baleCount);


		processor.Start();
		statisticManager.modelingInfoVec = processor.GetModelingInfo();
		statisticManager.CalculateStatistic();
		

		resultListBox->Items->Clear();
		listBox1->Items->Clear();

		for (int i = 0; i < _workDayCount; i++) {
			resultListBox->Items->Add((i+1)+") В день "+(i+1)+" из " + _baleCount +" кип");
			resultListBox->Items->Add("продано " + statisticManager.modelingInfoVec[i].soldNewspapers + " газет");
			resultListBox->Items->Add("Непроданных газет " + statisticManager.modelingInfoVec[i].unsoldNewspapers + " на сумму " + statisticManager.modelingInfoVec[i].credit);
			resultListBox->Items->Add("Прибыль составляет " + statisticManager.modelingInfoVec[i].debit);
			resultListBox->Items->Add("Не хватило газет " + statisticManager.modelingInfoVec[i].untreated + " людям");
			resultListBox->Items->Add("-----------------------");
		}

		listBox1->Items->Add("Средний убыток  = " + statisticManager.avCredit);
		listBox1->Items->Add("Средняя прибыль  = " + statisticManager.avDebit);
		listBox1->Items->Add("Среднее количество проданных газет  = " + statisticManager.avSoldNews);
		listBox1->Items->Add("Средняя количество непроданных газет  = " + statisticManager.avUnsoldNews);
		listBox1->Items->Add("Средняя количество необслуженных людей = " + statisticManager.avUntreated);

		workDayCountTextBox->Text = Convert::ToString(_workDayCount);
		commonDayRequestCountTextBox->Text = Convert::ToString(_commonDayRequestCount);
		baleCountTextBox->Text = Convert::ToString(_baleCount);
	}

private: System::Void workDayCountTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	wchar_t ch = e->KeyChar;

	if (!isdigit(ch) && (!iscntrl(ch))){
		e->Handled = true;
	}
}
private: System::Void commonDayRequestCountTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	wchar_t ch = e->KeyChar;

	if (!isdigit(ch) && (!iscntrl(ch))) {
		e->Handled = true;
	}
}
private: System::Void baleCountTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	wchar_t ch = e->KeyChar;

	if (!isdigit(ch) && (!iscntrl(ch))) {
		e->Handled = true;
	}
}

};
}
