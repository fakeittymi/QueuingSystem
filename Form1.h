#pragma once
#include "pch.h"
#include "Generator.h"
#include "Processor.h"


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
	private: System::Windows::Forms::TextBox^ averageBaleAmountTextBox;




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
			this->commonDayRequstCountLabel = (gcnew System::Windows::Forms::Label());
			this->workDayCountLabel = (gcnew System::Windows::Forms::Label());
			this->commonDayRequestCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->workDayCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->resultListBox = (gcnew System::Windows::Forms::ListBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->averageBaleAmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->averageBaleAmountLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->commonDayRequstCountLabel);
			this->groupBox1->Controls->Add(this->workDayCountLabel);
			this->groupBox1->Controls->Add(this->commonDayRequestCountTextBox);
			this->groupBox1->Controls->Add(this->workDayCountTextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 200);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// commonDayRequstCountLabel
			// 
			this->commonDayRequstCountLabel->Location = System::Drawing::Point(35, 117);
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
			this->commonDayRequestCountTextBox->Location = System::Drawing::Point(38, 160);
			this->commonDayRequestCountTextBox->Name = L"commonDayRequestCountTextBox";
			this->commonDayRequestCountTextBox->Size = System::Drawing::Size(100, 20);
			this->commonDayRequestCountTextBox->TabIndex = 1;
			this->commonDayRequestCountTextBox->Text = L"175";
			// 
			// workDayCountTextBox
			// 
			this->workDayCountTextBox->Location = System::Drawing::Point(38, 72);
			this->workDayCountTextBox->Name = L"workDayCountTextBox";
			this->workDayCountTextBox->Size = System::Drawing::Size(100, 20);
			this->workDayCountTextBox->TabIndex = 0;
			this->workDayCountTextBox->Text = L"1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->averageBaleAmountLabel);
			this->groupBox2->Controls->Add(this->averageBaleAmountTextBox);
			this->groupBox2->Controls->Add(this->resultListBox);
			this->groupBox2->Location = System::Drawing::Point(232, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(274, 314);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результаты работы симуляции";
			// 
			// resultListBox
			// 
			this->resultListBox->FormattingEnabled = true;
			this->resultListBox->Location = System::Drawing::Point(6, 19);
			this->resultListBox->Name = L"resultListBox";
			this->resultListBox->Size = System::Drawing::Size(250, 212);
			this->resultListBox->TabIndex = 1;
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(94, 248);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(75, 23);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Старт";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &Form1::startButton_Click);
			// 
			// averageBaleAmountTextBox
			// 
			this->averageBaleAmountTextBox->Location = System::Drawing::Point(6, 273);
			this->averageBaleAmountTextBox->Name = L"averageBaleAmountTextBox";
			this->averageBaleAmountTextBox->Size = System::Drawing::Size(100, 20);
			this->averageBaleAmountTextBox->TabIndex = 2;
			// 
			// averageBaleAmountLabel
			// 
			this->averageBaleAmountLabel->AutoSize = true;
			this->averageBaleAmountLabel->Location = System::Drawing::Point(7, 254);
			this->averageBaleAmountLabel->Name = L"averageBaleAmountLabel";
			this->averageBaleAmountLabel->Size = System::Drawing::Size(168, 13);
			this->averageBaleAmountLabel->TabIndex = 3;
			this->averageBaleAmountLabel->Text = L"Среднее количество кип в день";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 374);
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

		int _workDayCount = Convert::ToInt32(workDayCountTextBox->Text);
		int _commonDayRequestCount = Convert::ToInt32(commonDayRequestCountTextBox->Text);
		vector<StatisticManager::ModelingInfo> _modelingInfo;
		StatisticManager statisticManager;
		Generator generator(_commonDayRequestCount);
		Processor processor(statisticManager, generator, _workDayCount);

		processor.Start();
		_modelingInfo = processor.GetModelingInfo();

		resultListBox->Items->Clear();

		for (int i = 0; i < _workDayCount; i++) {
			resultListBox->Items->Add((i+1)+") В день "+(i+1)+" из "+_modelingInfo[i].bales+" кип");
			resultListBox->Items->Add("продано " + _modelingInfo[i].soldNewspapers + " газет");
			resultListBox->Items->Add("Непроданных газет " + _modelingInfo[i].unsoldNewspapers + " на сумму " + _modelingInfo[i].credit);
			resultListBox->Items->Add("Прибыль составляет " + _modelingInfo[i].debit);
		}

		averageBaleAmountTextBox->Text = Convert::ToString(processor.GetAverageBales(_modelingInfo));
	}
};
}
