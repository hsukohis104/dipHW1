#pragma once
#define _USE_MATH_DEFINES
#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include <math.h>
#include "MyForm1.h"
#include<string>
#include <cmath>


namespace Project1 {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//Bitmap^ GRAYtemp;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ problem1;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;

	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->problem1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// problem1
			// 
			this->problem1->Location = System::Drawing::Point(47, 68);
			this->problem1->Name = L"problem1";
			this->problem1->Size = System::Drawing::Size(75, 23);
			this->problem1->TabIndex = 0;
			this->problem1->Text = L"problem1";
			this->problem1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->problem1->UseVisualStyleBackColor = true;
			this->problem1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(337, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(357, 240);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(148, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"problem2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(756, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(376, 241);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(337, 328);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(357, 256);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(756, 328);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 256);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(22, 405);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(253, 256);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"probem3";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(166, 169);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"probem4";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(337, 313);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"num";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(431, 364);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(756, 328);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"num";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(413, 331);
			this->chart2->TabIndex = 9;
			this->chart2->Text = L"chart1";
			this->chart2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(47, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(47, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"probem5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(166, 250);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"probem6";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(47, 252);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 12;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(184, 299);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"probem7.1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(184, 353);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 14;
			this->button7->Text = L"probem7.2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(57, 355);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(47, 298);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(35, 22);
			this->textBox4->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(113, 298);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(51, 22);
			this->textBox5->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 304);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 12);
			this->label2->TabIndex = 19;
			this->label2->Text = L"X: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(88, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 12);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Y: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 359);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 12);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Angle: ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(148, 124);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 22;
			this->button8->Text = L"Undo";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1215, 748);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->problem1);
			this->Name = L"MyForm";
			this->Text = L"Homework1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	
	private: System::Void openFileDialog2_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}

		   

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//宣告點陣圖的格式 
		Bitmap^ image1;
		//new一個新的openFileDialog1開啟檔案
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//設定Filter，用以限定使用者開啟的檔案
		openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		//預設檔案名稱為空值
		openFileDialog1->FileName = "";
		//設定跳出選擇視窗的標題名稱
		openFileDialog1->Title = "載入影像";
		//設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog1->FilterIndex = 1;


		//跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			//將選取的檔案讀取並且存至Image1
			image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			Bitmap^ Rtemp = gcnew Bitmap(image1->Width, image1->Height);
			Bitmap^ Gtemp = gcnew Bitmap(image1->Width, image1->Height);
			Bitmap^ Btemp = gcnew Bitmap(image1->Width, image1->Height);
			Bitmap^ GRAYtemp =  gcnew Bitmap(image1->Width, image1->Height);
			pictureBox5->Image = image1;
			//將影像顯示在pictureBox1
			//int sizex = image1->Width;
			//int sizey = image1->Height;
			//vector<vector<Pixel> > imageVec(sizey, vector<Pixel>(sizex));
			
			for (int x = 0; x < Rtemp->Height; x++)
			{
				for (int y = 0; y < Rtemp->Width; y++)
				{
					Color RGB = image1->GetPixel(y, x);
					int invR = Convert::ToInt32(RGB.R); // RGB.R
					int invG = Convert::ToInt32(RGB.G);
					int invB = Convert::ToInt32(RGB.B);
					int avg = invR * 0.299 + invG * 0.587 + invB * 0.114;
					/*
					Rtemp->SetPixel(y, x, Color::FromArgb(0, (invG + invB)/3, (invG + invB) / 3));
					Gtemp->SetPixel(y, x, Color::FromArgb((invR + invB)/3, 0, (invR + invB) / 3));
					Btemp->SetPixel(y, x, Color::FromArgb((invR + invG) / 3, (invR + invG) / 3, 0));
					GRAYtemp->SetPixel(y, x, Color::FromArgb(avg, avg, avg));*/
					Rtemp->SetPixel(y, x, Color::FromArgb(invR, invR, invR));
					Gtemp->SetPixel(y, x, Color::FromArgb(invG, invG, invG));
					Btemp->SetPixel(y, x, Color::FromArgb(invB, invB, invB));
					GRAYtemp->SetPixel(y, x, Color::FromArgb(avg, avg, avg));


					
				}
			}
			pictureBox1->Image = Rtemp;
			pictureBox2->Image = Gtemp;
			pictureBox3->Image = Btemp;
			pictureBox4->Image = GRAYtemp;
			
			
		}
		//printf("%d", image1);
		
	}

	Bitmap^ ToGRAY(Bitmap^ ori_image) {
		Bitmap^ GRAY = gcnew Bitmap(ori_image->Width, ori_image->Height);
		for (int x = 0; x < GRAY->Height; x++)
		{
			for (int y = 0; y < GRAY->Width; y++)
			{
				Color RGB = ori_image->GetPixel(y, x);
				int R = Convert::ToInt32(RGB.R);
				int G = Convert::ToInt32(RGB.G);
				int B = Convert::ToInt32(RGB.B);
				int avg = R * 0.299 + G * 0.587 + B * 0.114;
				GRAY->SetPixel(y, x, Color::FromArgb(avg, avg, avg));
			}
		}
		
		return GRAY;

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		openFileDialog1->FileName = "";
		openFileDialog1->Title = "載入影像";
		openFileDialog1->FilterIndex = 1;
		int value = 0;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0){

			//float kernel[3][3] = { {0.1111111, 0.1111111, 0.1111111},{0.1111111, 0.1111111, 0.1111111},{0.1111111, 0.1111111, 0.1111111} };
			int kernel[3][3] = { {1,1,1}, {1,1,1}, {1,1,1} };
			Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			int hi = image1->Height;
			int wi = image1->Width;
			Bitmap^ GRAY = ToGRAY(image1);
			Bitmap^ Smooth_out = gcnew Bitmap(wi, hi);			
			pictureBox1->Image = GRAY;

			
			for (int x = 1; x < hi-2; x++)
			{
				for (int y = 1; y < wi-2; y++) {
					value = 0;
					for (int i = -1; i < 2; i++) {
						for (int j = -1; j < 2; j++) {
							Color RGB = GRAY->GetPixel(y+i, x+j);
							//printf("%d\n", value);
							value += RGB.R * kernel[i+1][j+1];						
						}
					}
					value = value / 9;
					Smooth_out->SetPixel(y, x, Color::FromArgb(value, value, value));

				}
			}
			pictureBox2->Image = Smooth_out;
			Smooth_out = gcnew Bitmap(wi, hi);
			
			int medianary[9];
			int mediancount = 0;
			for (int x = 1; x < hi - 2; x++)
			{
				for (int y = 1; y < wi - 2; y++) {

					//value = 0;
					mediancount = 0;
					for (int i = -1; i < 2; i++) {
						for (int j = -1; j < 2; j++) {
							Color RGB = GRAY->GetPixel(y + i, x + j);
							//printf("%d\n", value);
							medianary[mediancount] = RGB.R;
							mediancount++;
							//value += RGB.R * kernel[i][j];

						}
					}
					for (int i = 0; i < 9; i++) {
						for (int j = i + 1; j < 9; j++) {
							if (medianary[i] > medianary[j]) {
								int temp = medianary[j];
								medianary[j] = medianary[i];
								medianary[i] = temp;
							}
						}
					}
					//value = value / 9;


					Smooth_out->SetPixel(y, x, Color::FromArgb(medianary[4], medianary[4], medianary[4]));

				}
			}
			pictureBox3->Image = Smooth_out;




		} //button
	}

	

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	openFileDialog1->FileName = "";
	openFileDialog1->Title = "載入影像";
	openFileDialog1->FilterIndex = 1;
	int value = 0;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {

		Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		int hi = image1->Height;
		int wi = image1->Width;
		Bitmap^ GRAY = ToGRAY(image1);
		Bitmap^ Smooth_out = gcnew Bitmap(wi, hi);
		double mn = GRAY->Height * GRAY->Width;
		pictureBox1->Image = GRAY;
		chart2->Titles->Add("Histogram of Gray Level");
		chart1->Titles->Add("Histogram of Gray Level");
		chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = 256;
		chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = 0;
		chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = 3000;
		chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
		chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 50; 
		chart1->Visible = 1;
		chart2->ChartAreas["ChartArea1"]->AxisX->Maximum = 256;
		chart2->ChartAreas["ChartArea1"]->AxisX->Minimum = 0;
		chart2->ChartAreas["ChartArea1"]->AxisY->Maximum = 3000;
		chart2->ChartAreas["ChartArea1"]->AxisY->Minimum = 0;
		chart2->ChartAreas["ChartArea1"]->AxisX->Interval = 50;
		chart2->Visible = 1;
		double histo[256] = { 0 };

		for (int x = 0; x < GRAY->Height; x++)
		{
			for (int y = 0; y < GRAY->Width; y++)
			{
				Color RGB = image1->GetPixel(y, x);
				int R = Convert::ToInt32(RGB.R);
				histo[R] ++;
			}
		}
		chart1->Series["num"]->ChartArea = "ChartArea1";
		chart1->Series["num"]->Points->AddXY( 0, histo[0]);
		chart2->Series["num"]->ChartArea = "ChartArea1";	

		for (int i = 1; i <= 255; i++) {
			chart1->Series["num"]->Points->AddXY(i, histo[i]);
			histo[i] += histo[i - 1];		
		}
	
		for (int i = 0; i <= 255; i++) {
			(histo[i] /= mn) *= 255;
			histo[i] = round(histo[i]);			
		}

		int temp[256] = { 0 };	
		Bitmap^ out = gcnew Bitmap(GRAY->Width, GRAY->Height);
		for (int x = 0; x < GRAY->Height; x++)
		{
			for (int y = 0; y < GRAY->Width; y++)
			{
				Color RGB = image1->GetPixel(y, x);
				int R = Convert::ToInt32(RGB.R);
				out->SetPixel(y, x, Color::FromArgb(histo[R], histo[R], histo[R]));
				temp[(int)histo[R]]++;
			}
		}
		for (int i = 0; i <= 255; i++)
			chart2->Series["num"]->Points->AddXY(i , temp[i ]);
		pictureBox2->Image = out;
		
		

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	openFileDialog1->FileName = "";
	openFileDialog1->Title = "載入影像";
	openFileDialog1->FilterIndex = 1;
	int value = 0;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {

		Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		int hi = image1->Height;
		int wi = image1->Width;
		Bitmap^  GRAY = ToGRAY(image1);
		Bitmap^ GRAY1 = ToGRAY(image1);
		pictureBox1->Image = GRAY1;
		for (int x = 0; x < GRAY->Height; x++)
			for (int y = 0; y < GRAY->Width; y++) {
				Color RGB = GRAY->GetPixel(y, x);
				int R = Convert::ToInt32(RGB.R);
				if (R >= Convert::ToInt32(textBox1->Text))
					GRAY->SetPixel(y, x, Color::FromArgb(255, 255, 255));
				else
					GRAY->SetPixel(y, x, Color::FromArgb(0, 0, 0));
			}
		pictureBox2->Image = GRAY;
	}

}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	openFileDialog1->FileName = "";
	openFileDialog1->Title = "載入影像";
	openFileDialog1->FilterIndex = 1;
	int valuex = 0;
	int kernely[3][3] = { {1,0,-1}, {2,0,-2}, {1,0,-1} };
	int kernelx[3][3] = { {1,2,1}, {0,0,0}, {-1,-2,-1} };
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {

		Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		int hi = image1->Height;
		int wi = image1->Width;
		Bitmap^ GRAY = ToGRAY(image1);
		Bitmap^ out = gcnew Bitmap(wi, hi);
		Bitmap^ Smooth_out = gcnew Bitmap(wi, hi);

		int medianary[9];
		int mediancount = 0;
		for (int x = 1; x < hi - 2; x++)
		{
			for (int y = 1; y < wi - 2; y++) {

				mediancount = 0;
				for (int i = -1; i < 2; i++) {
					for (int j = -1; j < 2; j++) {
						Color RGB = GRAY->GetPixel(y + i, x + j);
						medianary[mediancount] = RGB.R;
						mediancount++;
					}
				}
				for (int i = 0; i < 9; i++) {
					for (int j = i + 1; j < 9; j++) {
						if (medianary[i] > medianary[j]) {
							int temp = medianary[j];
							medianary[j] = medianary[i];
							medianary[i] = temp;
						}
					}
				}


				Smooth_out->SetPixel(y, x, Color::FromArgb(medianary[4], medianary[4], medianary[4]));

			}
		}
		pictureBox1->Image = Smooth_out;
		int valuey = 0;
		Bitmap^ sobelx = gcnew Bitmap(wi, hi);
		Bitmap^ sobely = gcnew Bitmap(wi, hi);

		for (int x = 1; x < hi - 2; x++)
		{
			for (int y = 1; y < wi - 2; y++) {

				valuex = 0;
				valuey = 0;
				for (int i = -1; i < 2; i++) {
					for (int j = -1; j < 2; j++) {
						Color RGB = Smooth_out->GetPixel(y + i, x + j);
						valuex += RGB.R * kernelx[i + 1][j + 1];
						valuey += RGB.R * kernely[i + 1][j + 1];

					}
				}
				valuex = sqrt(valuex * valuex);
				valuey = sqrt(valuey * valuey);
				if (valuex > 255)
					valuex = 255;
				if (valuey > 255)
					valuey = 255;

				sobelx->SetPixel(y, x, Color::FromArgb(valuex, valuex, valuex));
				sobely->SetPixel(y, x, Color::FromArgb(valuey, valuey, valuey));
				valuex = sqrt(valuex * valuex + valuey * valuey);
				if (valuex > 255)
					valuex = 255;

				out->SetPixel(y, x, Color::FromArgb(valuex, valuex, valuex));

			}
		}
		pictureBox4->Image = out;
		pictureBox2->Image = sobelx;
		pictureBox3->Image = sobely;


	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	openFileDialog1->FileName = "";
	openFileDialog1->Title = "載入影像";
	openFileDialog1->FilterIndex = 1;
	int valuex = 0;
	int kernelx[3][3] = { {1,0,-1}, {2,0,-2}, {1,0,-1} };
	int kernely[3][3] = { {1,2,1}, {0,0,0}, {-1,-2,-1} };
	Bitmap^ GRAY;
	Bitmap^ out;
	Bitmap^ image1;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {

		image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		int hi = image1->Height;
		int wi = image1->Width;
		GRAY = ToGRAY(image1);
		out = gcnew Bitmap(wi, hi);
		Bitmap^ Smooth_out = gcnew Bitmap(wi, hi);

		int medianary[9];
		int mediancount = 0;
		for (int x = 1; x < hi - 2; x++)
		{
			for (int y = 1; y < wi - 2; y++) {

				//value = 0;
				mediancount = 0;
				for (int i = -1; i < 2; i++) {
					for (int j = -1; j < 2; j++) {
						Color RGB = GRAY->GetPixel(y + i, x + j);
						//printf("%d\n", value);
						medianary[mediancount] = RGB.R;
						mediancount++;
						//value += RGB.R * kernel[i][j];

					}
				}
				for (int i = 0; i < 9; i++) {
					for (int j = i + 1; j < 9; j++) {
						if (medianary[i] > medianary[j]) {
							int temp = medianary[j];
							medianary[j] = medianary[i];
							medianary[i] = temp;
						}
					}
				}
				//value = value / 9;
				Smooth_out->SetPixel(y, x, Color::FromArgb(medianary[4], medianary[4], medianary[4]));

			}
		}
		pictureBox2->Image = Smooth_out;
		int valuey = 0;
		for (int x = 1; x < hi - 2; x++)
		{
			for (int y = 1; y < wi - 2; y++) {

				valuex = 0, valuey = 0;
				for (int i = -1; i < 2; i++) {
					for (int j = -1; j < 2; j++) {
						Color RGB = Smooth_out->GetPixel(y + i, x + j);
						//printf("%d\n", value);
						valuex += RGB.R * kernelx[i + 1][j + 1];
						valuey += RGB.R * kernely[i + 1][j + 1];

					}
				}
				valuex = sqrt(valuex * valuex + valuey * valuey);
				if (valuex > 255)
					valuex = 255;
				out->SetPixel(y, x, Color::FromArgb(valuex, valuex, valuex));

			}
		}
		pictureBox1->Image = out;

	}
	Bitmap^ thresholding_out = gcnew Bitmap(out->Width, out->Height);
	for (int x = 0; x < out->Height; x++)
		for (int y = 0; y < out->Width; y++) {
			Color RGB = out->GetPixel(y, x);
			int R = Convert::ToInt32(RGB.R);
			if (R >= Convert::ToInt32(textBox2->Text))
				thresholding_out->SetPixel(y, x, Color::FromArgb(255, 255, 255));
			else
				thresholding_out->SetPixel(y, x, Color::FromArgb(0, 0, 0));
		}
	pictureBox2->Image = thresholding_out;
	for (int x = 0; x < thresholding_out->Height; x++)
		for (int y = 0; y < thresholding_out->Width; y++) {
			Color RGB = thresholding_out->GetPixel(y, x);
			int R = Convert::ToInt32(RGB.R);
			if (R  == 255)
				image1->SetPixel(y, x, Color::FromArgb(0, 255, 0));
		}
	pictureBox3->Image = image1;

}

	
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	openFileDialog1->FileName = "";
	openFileDialog1->Title = "載入影像";
	openFileDialog1->FilterIndex = 1;
	int value = 0;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {

		//float kernel[3][3] = { {0.1111111, 0.1111111, 0.1111111},{0.1111111, 0.1111111, 0.1111111},{0.1111111, 0.1111111, 0.1111111} };
		int kernel[3][3] = { {2,0,0}, {0,1,0}, {0,0,1} };

		Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		int hi = image1->Height;
		int wi = image1->Width;
		Bitmap^ GRAY = ToGRAY(image1);
		pictureBox1->Image = GRAY;
		float x_scaling = Convert::ToSingle(textBox5->Text);
		float y_scaling = Convert::ToSingle(textBox4->Text);
		int nh = (int)(hi * x_scaling + 0.5);
		int nw = (int)(wi * y_scaling + 0.5); 
		Bitmap^ Smooth_out = gcnew Bitmap(nw, nh);
		int y1 = 0;
		int x1 = 0;
		int x = 0; 
		int y = 0;
		//printf("%d%d", nh, nw);
		for (int x1 = 0; x1 < nh; x1++)
		{
			for (float y1 = 0; y1 < nw; y1++) {
				y = y1 / y_scaling, x = x1 / x_scaling;
				Color RGB = GRAY->GetPixel(y, x);
				Smooth_out->SetPixel(y1, x1, Color::FromArgb(RGB.R, RGB.R, RGB.R));
			}
		}
		pictureBox2->Image = Smooth_out;
	}
}
	float MAX(float a,float b) {
		 return a > b ? a : b;
	}
	float MIN(float a, float b) {
		 return a > b ? b : a;
	 }
	void clearpicture() {
		pictureBox1->Image = nullptr;
		pictureBox2->Image = nullptr;
		pictureBox3->Image = nullptr;
		pictureBox4->Image = nullptr;
		pictureBox5->Image = nullptr;
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
	openFileDialog1->FileName = "";
	openFileDialog1->Title = "載入影像";
	openFileDialog1->FilterIndex = 1;
	int value = 0;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {

		Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		int hi = image1->Height;
		int wi = image1->Width;
		float Angle = Convert::ToSingle(textBox3->Text);
		Bitmap^ GRAY = ToGRAY(image1);
		pictureBox1->Image = GRAY;
		int a_x,a_y, b_x,b_y, c_x,c_y, d_x,d_y;
		a_x = 0, a_y = 0;
		b_x = wi - 1, b_y = 0;
		c_x = wi - 1, c_y = hi - 1;
		d_x = 0, d_y = hi - 1;
		Angle = Angle * (M_PI / 180);
		float vcos = cos(Angle), vsin = sin(Angle);
		float fx1 = vcos * a_x - vsin * a_y;
		float fx2 = vcos * b_x - vsin * b_y;
		float fx3 = vcos * c_x - vsin * c_y;
		float fx4 = vcos * d_x - vsin * d_y;

		float fy1 = vsin * a_x + vcos * a_y;
		float fy2 = vsin * b_x + vcos * b_y;
		float fy3 = vsin * c_x + vcos * c_y;
		float fy4 = vsin * d_x + vcos * d_y;

		float max_x = MAX(fx1, MAX(fx2, MAX(fx3, fx4)));
		float min_x = MIN(fx1, MIN(fx2, MIN(fx3, fx4)));
		float max_y = MAX(fy1, MAX(fy2, MAX(fy3, fy4)));
		float min_y = MIN(fy1, MIN(fy2, MIN(fy3, fy4)));

		int n_width = (int)(max_x - min_x + 0.5);
		int n_height = (int)(max_y - min_y + 0.5) ;
		Bitmap^ Smooth_out = gcnew Bitmap(n_width, n_height);
		for (int x = 0; x < n_height; x++)
		{
			for (int y = 0; y < n_width; y++) {
				Smooth_out->SetPixel(y, x, Color::FromArgb(0, 0, 0));
			}
		}

		int y1 = 0;
		int x1 = 0;
		int x = 0;
		int y = 0;
		double h2 = 0.5 * (hi - 1), w2 = 0.5 * (wi - 1);
		double nh2 = 0.5 * (n_height - 1), nw2 = 0.5 * (n_width - 1);
		float ox = -nw2 * vcos - nh2 * vsin + w2 ;
		//ox = ox * (-1);
		float oy = nw2 * vsin - nh2 * vcos + h2 ;
		//oy = oy * (-1);
		for (int x =0; x < n_height; x++)
		{
			for (int y = 0; y < n_width; y++) {
				
				y1 = (int)(y * vcos + x* vsin +0.5+ ox);
				x1 = (int)(x * vcos - y * vsin +0.5+oy);

				if (y1 >= 0 && x1 >= 0 && x1 < hi && y1 < wi) {
					Color RGB = GRAY->GetPixel(y1, x1);
					Smooth_out->SetPixel(y, x, Color::FromArgb(RGB.R, RGB.R, RGB.R));
				}

			}
		}
		pictureBox3->Image = Smooth_out;
	}
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = nullptr;
	pictureBox2->Image = nullptr;
	pictureBox3->Image = nullptr;
	pictureBox4->Image = nullptr;
	pictureBox5->Image = nullptr;
	chart1->Visible = 0;
	chart2->Visible = 0;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
