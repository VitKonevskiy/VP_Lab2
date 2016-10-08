#pragma once
namespace Clock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Hours;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  Minutes;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  Seconds;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Hours = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Minutes = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Seconds = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Hours
			// 
			this->Hours->AutoSize = true;
			this->Hours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Hours->Location = System::Drawing::Point(12, 30);
			this->Hours->Name = L"Hours";
			this->Hours->Size = System::Drawing::Size(47, 33);
			this->Hours->TabIndex = 0;
			this->Hours->Text = L"00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(56, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L":";
			// 
			// Minutes
			// 
			this->Minutes->AutoSize = true;
			this->Minutes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Minutes->Location = System::Drawing::Point(76, 30);
			this->Minutes->Name = L"Minutes";
			this->Minutes->Size = System::Drawing::Size(47, 33);
			this->Minutes->TabIndex = 2;
			this->Minutes->Text = L"00";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(120, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L":";
			// 
			// Seconds
			// 
			this->Seconds->AutoSize = true;
			this->Seconds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Seconds->Location = System::Drawing::Point(140, 30);
			this->Seconds->Name = L"Seconds";
			this->Seconds->Size = System::Drawing::Size(47, 33);
			this->Seconds->TabIndex = 4;
			this->Seconds->Text = L"00";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(213, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 95);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Seconds);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Minutes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Hours);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Clock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime A;
		A = DateTime::Now;
		this->Hours->Text = Convert::ToString(A.Hour);
		this->Minutes->Text = Convert::ToString(A.Minute);
		this->Seconds->Text = Convert::ToString(A.Second);
		if (A.Second % 2 == 0)
		{
			this->label2->Visible = false;
			this->label4->Visible = false;
		}
		else
		{
			this->label2->Visible = true;
			this->label4->Visible = true;
		}
	}
};
}
