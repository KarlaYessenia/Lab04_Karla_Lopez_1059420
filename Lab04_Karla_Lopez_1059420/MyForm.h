#pragma once
namespace Lab04KarlaLopez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Diagnostics;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		static int filas;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ BtnMergeDes;

	private: System::Windows::Forms::Button^ BtnMergeAS;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ BtnBubbleDES;

	private: System::Windows::Forms::Button^ BtnBubbleAS;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ BtnQuickDES;
	private: System::Windows::Forms::Button^ BtnquickAS;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::TextBox^ txtPath;
	private: System::Windows::Forms::Button^ BtnImportar;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ TxtCambioCol;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ BtnSalir;
	private: System::Windows::Forms::RichTextBox^ RtxtCOLORDENADAS;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::LinkLabel^ LlbMerge;
	private: System::Windows::Forms::LinkLabel^ LblBubble;
	private: System::Windows::Forms::LinkLabel^ Lblquicksort;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ RtxtDatosordenados;
	private: System::Windows::Forms::DataGridView^ dgvMatriz2;

	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtFilascambio1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ BtnQuickDES2;
	private: System::Windows::Forms::Button^ BtnQuickAS2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ txtPath2;

	private: System::Windows::Forms::Button^ BtnImportar2;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Button^ BtnBubbleDES2;
	private: System::Windows::Forms::Button^ BtnBubbleAS2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::LinkLabel^ LblstoBublle2;
	private: System::Windows::Forms::LinkLabel^ Lblstopquick2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->LlbMerge = (gcnew System::Windows::Forms::LinkLabel());
			this->LblBubble = (gcnew System::Windows::Forms::LinkLabel());
			this->Lblquicksort = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RtxtCOLORDENADAS = (gcnew System::Windows::Forms::RichTextBox());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnMergeDes = (gcnew System::Windows::Forms::Button());
			this->BtnMergeAS = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnBubbleDES = (gcnew System::Windows::Forms::Button());
			this->BtnBubbleAS = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnQuickDES = (gcnew System::Windows::Forms::Button());
			this->BtnquickAS = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->BtnImportar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxtCambioCol = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->RtxtDatosordenados = (gcnew System::Windows::Forms::RichTextBox());
			this->dgvMatriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtFilascambio1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnQuickDES2 = (gcnew System::Windows::Forms::Button());
			this->BtnQuickAS2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPath2 = (gcnew System::Windows::Forms::TextBox());
			this->BtnImportar2 = (gcnew System::Windows::Forms::Button());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnBubbleDES2 = (gcnew System::Windows::Forms::Button());
			this->BtnBubbleAS2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->LblstoBublle2 = (gcnew System::Windows::Forms::LinkLabel());
			this->Lblstopquick2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->BtnSalir = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1355, 967);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox6);
			this->tabPage1->Controls->Add(this->RtxtCOLORDENADAS);
			this->tabPage1->Controls->Add(this->dgvMatriz);
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1347, 938);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->LlbMerge);
			this->groupBox6->Controls->Add(this->LblBubble);
			this->groupBox6->Controls->Add(this->Lblquicksort);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Location = System::Drawing::Point(978, 598);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(307, 209);
			this->groupBox6->TabIndex = 10;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Tiempos de ejecucion de los metodos";
			// 
			// LlbMerge
			// 
			this->LlbMerge->AutoSize = true;
			this->LlbMerge->Location = System::Drawing::Point(118, 134);
			this->LlbMerge->Name = L"LlbMerge";
			this->LlbMerge->Size = System::Drawing::Size(16, 17);
			this->LlbMerge->TabIndex = 5;
			this->LlbMerge->TabStop = true;
			this->LlbMerge->Text = L"0";
			// 
			// LblBubble
			// 
			this->LblBubble->AutoSize = true;
			this->LblBubble->Location = System::Drawing::Point(118, 85);
			this->LblBubble->Name = L"LblBubble";
			this->LblBubble->Size = System::Drawing::Size(16, 17);
			this->LblBubble->TabIndex = 4;
			this->LblBubble->TabStop = true;
			this->LblBubble->Text = L"0";
			// 
			// Lblquicksort
			// 
			this->Lblquicksort->AutoSize = true;
			this->Lblquicksort->Location = System::Drawing::Point(113, 43);
			this->Lblquicksort->Name = L"Lblquicksort";
			this->Lblquicksort->Size = System::Drawing::Size(16, 17);
			this->Lblquicksort->TabIndex = 3;
			this->Lblquicksort->TabStop = true;
			this->Lblquicksort->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Merge Sort";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Bubble Sort";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Quick Sort";
			// 
			// RtxtCOLORDENADAS
			// 
			this->RtxtCOLORDENADAS->Location = System::Drawing::Point(586, 140);
			this->RtxtCOLORDENADAS->Name = L"RtxtCOLORDENADAS";
			this->RtxtCOLORDENADAS->Size = System::Drawing::Size(350, 779);
			this->RtxtCOLORDENADAS->TabIndex = 9;
			this->RtxtCOLORDENADAS->Text = L"";
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(16, 140);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->RowHeadersWidth = 51;
			this->dgvMatriz->RowTemplate->Height = 24;
			this->dgvMatriz->Size = System::Drawing::Size(546, 779);
			this->dgvMatriz->TabIndex = 8;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->BtnMergeDes);
			this->groupBox5->Controls->Add(this->BtnMergeAS);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Location = System::Drawing::Point(959, 437);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(382, 123);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ordenar por metodo Merge Sort";
			// 
			// BtnMergeDes
			// 
			this->BtnMergeDes->Location = System::Drawing::Point(206, 32);
			this->BtnMergeDes->Name = L"BtnMergeDes";
			this->BtnMergeDes->Size = System::Drawing::Size(170, 67);
			this->BtnMergeDes->TabIndex = 2;
			this->BtnMergeDes->Text = L"Merge Sort\r\nDescendente";
			this->BtnMergeDes->UseVisualStyleBackColor = true;
			this->BtnMergeDes->Click += gcnew System::EventHandler(this, &MyForm::BtnMergeDes_Click);
			// 
			// BtnMergeAS
			// 
			this->BtnMergeAS->Location = System::Drawing::Point(19, 32);
			this->BtnMergeAS->Name = L"BtnMergeAS";
			this->BtnMergeAS->Size = System::Drawing::Size(170, 67);
			this->BtnMergeAS->TabIndex = 1;
			this->BtnMergeAS->Text = L"Merge Sort \r\nAscendente";
			this->BtnMergeAS->UseVisualStyleBackColor = true;
			this->BtnMergeAS->Click += gcnew System::EventHandler(this, &MyForm::BtnMergeAS_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(19, 39);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(8, 8);
			this->button8->TabIndex = 0;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->BtnBubbleDES);
			this->groupBox4->Controls->Add(this->BtnBubbleAS);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Location = System::Drawing::Point(959, 290);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(382, 123);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ordenar por metodo Bubble Sort";
			// 
			// BtnBubbleDES
			// 
			this->BtnBubbleDES->Location = System::Drawing::Point(206, 32);
			this->BtnBubbleDES->Name = L"BtnBubbleDES";
			this->BtnBubbleDES->Size = System::Drawing::Size(170, 67);
			this->BtnBubbleDES->TabIndex = 2;
			this->BtnBubbleDES->Text = L"Bubble Sort\r\nDescendente";
			this->BtnBubbleDES->UseVisualStyleBackColor = true;
			this->BtnBubbleDES->Click += gcnew System::EventHandler(this, &MyForm::BtnBubbleDES_Click);
			// 
			// BtnBubbleAS
			// 
			this->BtnBubbleAS->Location = System::Drawing::Point(19, 32);
			this->BtnBubbleAS->Name = L"BtnBubbleAS";
			this->BtnBubbleAS->Size = System::Drawing::Size(170, 67);
			this->BtnBubbleAS->TabIndex = 1;
			this->BtnBubbleAS->Text = L"Bubble Sort \r\nAscendente";
			this->BtnBubbleAS->UseVisualStyleBackColor = true;
			this->BtnBubbleAS->Click += gcnew System::EventHandler(this, &MyForm::BtnBubbleAS_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(19, 39);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(8, 8);
			this->button5->TabIndex = 0;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->BtnQuickDES);
			this->groupBox3->Controls->Add(this->BtnquickAS);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(959, 150);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(382, 123);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ordenar por metodo Quick Sort";
			// 
			// BtnQuickDES
			// 
			this->BtnQuickDES->Location = System::Drawing::Point(206, 32);
			this->BtnQuickDES->Name = L"BtnQuickDES";
			this->BtnQuickDES->Size = System::Drawing::Size(170, 67);
			this->BtnQuickDES->TabIndex = 2;
			this->BtnQuickDES->Text = L"Quick Sort\r\nDescendente";
			this->BtnQuickDES->UseVisualStyleBackColor = true;
			this->BtnQuickDES->Click += gcnew System::EventHandler(this, &MyForm::BtnQuickDES_Click);
			// 
			// BtnquickAS
			// 
			this->BtnquickAS->Location = System::Drawing::Point(19, 32);
			this->BtnquickAS->Name = L"BtnquickAS";
			this->BtnquickAS->Size = System::Drawing::Size(170, 67);
			this->BtnquickAS->TabIndex = 1;
			this->BtnquickAS->Text = L"Quick Sort \r\nAscendente";
			this->BtnquickAS->UseVisualStyleBackColor = true;
			this->BtnquickAS->Click += gcnew System::EventHandler(this, &MyForm::BtnquickAS_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(8, 8);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtPath);
			this->groupBox2->Controls->Add(this->BtnImportar);
			this->groupBox2->Location = System::Drawing::Point(237, 17);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(533, 93);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Importar Archivo de Texto";
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(151, 32);
			this->txtPath->Margin = System::Windows::Forms::Padding(4);
			this->txtPath->Name = L"txtPath";
			this->txtPath->ReadOnly = true;
			this->txtPath->Size = System::Drawing::Size(349, 22);
			this->txtPath->TabIndex = 1;
			// 
			// BtnImportar
			// 
			this->BtnImportar->Location = System::Drawing::Point(28, 32);
			this->BtnImportar->Margin = System::Windows::Forms::Padding(4);
			this->BtnImportar->Name = L"BtnImportar";
			this->BtnImportar->Size = System::Drawing::Size(100, 28);
			this->BtnImportar->TabIndex = 0;
			this->BtnImportar->Text = L"Importar";
			this->BtnImportar->UseVisualStyleBackColor = true;
			this->BtnImportar->Click += gcnew System::EventHandler(this, &MyForm::BtnImportar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->TxtCambioCol);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(959, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(382, 123);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos para ordenar columna ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(136, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ejemplo : Año";
			// 
			// TxtCambioCol
			// 
			this->TxtCambioCol->Location = System::Drawing::Point(39, 82);
			this->TxtCambioCol->Name = L"TxtCambioCol";
			this->TxtCambioCol->Size = System::Drawing::Size(273, 22);
			this->TxtCambioCol->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese el nombre de la fila que desea ordenar";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->RtxtDatosordenados);
			this->tabPage2->Controls->Add(this->dgvMatriz2);
			this->tabPage2->Controls->Add(this->groupBox8);
			this->tabPage2->Controls->Add(this->groupBox9);
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Controls->Add(this->groupBox10);
			this->tabPage2->Controls->Add(this->groupBox11);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1347, 938);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// RtxtDatosordenados
			// 
			this->RtxtDatosordenados->Location = System::Drawing::Point(748, 161);
			this->RtxtDatosordenados->Name = L"RtxtDatosordenados";
			this->RtxtDatosordenados->Size = System::Drawing::Size(175, 771);
			this->RtxtDatosordenados->TabIndex = 11;
			this->RtxtDatosordenados->Text = L"";
			// 
			// dgvMatriz2
			// 
			this->dgvMatriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz2->Location = System::Drawing::Point(17, 161);
			this->dgvMatriz2->Name = L"dgvMatriz2";
			this->dgvMatriz2->RowHeadersWidth = 51;
			this->dgvMatriz2->RowTemplate->Height = 24;
			this->dgvMatriz2->Size = System::Drawing::Size(708, 771);
			this->dgvMatriz2->TabIndex = 9;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->txtFilascambio1);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Location = System::Drawing::Point(946, 22);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(382, 123);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Datos para ordenar columna ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(136, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 17);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Ejemplo : Año";
			// 
			// txtFilascambio1
			// 
			this->txtFilascambio1->Location = System::Drawing::Point(39, 82);
			this->txtFilascambio1->Name = L"txtFilascambio1";
			this->txtFilascambio1->Size = System::Drawing::Size(273, 22);
			this->txtFilascambio1->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(304, 17);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Ingrese el nombre de la fila que desea ordenar";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->BtnQuickDES2);
			this->groupBox9->Controls->Add(this->BtnQuickAS2);
			this->groupBox9->Controls->Add(this->button6);
			this->groupBox9->Location = System::Drawing::Point(946, 303);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(382, 123);
			this->groupBox9->TabIndex = 3;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Ordenar por metodo Quick Sort";
			// 
			// BtnQuickDES2
			// 
			this->BtnQuickDES2->Location = System::Drawing::Point(206, 32);
			this->BtnQuickDES2->Name = L"BtnQuickDES2";
			this->BtnQuickDES2->Size = System::Drawing::Size(170, 67);
			this->BtnQuickDES2->TabIndex = 2;
			this->BtnQuickDES2->Text = L"Quick Sort\r\nDescendente";
			this->BtnQuickDES2->UseVisualStyleBackColor = true;
			this->BtnQuickDES2->Click += gcnew System::EventHandler(this, &MyForm::BtnQuickDES2_Click);
			// 
			// BtnQuickAS2
			// 
			this->BtnQuickAS2->Location = System::Drawing::Point(19, 32);
			this->BtnQuickAS2->Name = L"BtnQuickAS2";
			this->BtnQuickAS2->Size = System::Drawing::Size(170, 67);
			this->BtnQuickAS2->TabIndex = 1;
			this->BtnQuickAS2->Text = L"Quick Sort \r\nAscendente";
			this->BtnQuickAS2->UseVisualStyleBackColor = true;
			this->BtnQuickAS2->Click += gcnew System::EventHandler(this, &MyForm::BtnQuickAS2_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(19, 39);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(8, 8);
			this->button6->TabIndex = 0;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->txtPath2);
			this->groupBox7->Controls->Add(this->BtnImportar2);
			this->groupBox7->Location = System::Drawing::Point(208, 42);
			this->groupBox7->Margin = System::Windows::Forms::Padding(4);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(4);
			this->groupBox7->Size = System::Drawing::Size(533, 93);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Importar Archivo de Texto";
			// 
			// txtPath2
			// 
			this->txtPath2->Location = System::Drawing::Point(151, 32);
			this->txtPath2->Margin = System::Windows::Forms::Padding(4);
			this->txtPath2->Name = L"txtPath2";
			this->txtPath2->ReadOnly = true;
			this->txtPath2->Size = System::Drawing::Size(349, 22);
			this->txtPath2->TabIndex = 1;
			// 
			// BtnImportar2
			// 
			this->BtnImportar2->Location = System::Drawing::Point(28, 32);
			this->BtnImportar2->Margin = System::Windows::Forms::Padding(4);
			this->BtnImportar2->Name = L"BtnImportar2";
			this->BtnImportar2->Size = System::Drawing::Size(100, 28);
			this->BtnImportar2->TabIndex = 0;
			this->BtnImportar2->Text = L"Importar";
			this->BtnImportar2->UseVisualStyleBackColor = true;
			this->BtnImportar2->Click += gcnew System::EventHandler(this, &MyForm::BtnImportar2_Click);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->BtnBubbleDES2);
			this->groupBox10->Controls->Add(this->BtnBubbleAS2);
			this->groupBox10->Controls->Add(this->button10);
			this->groupBox10->Location = System::Drawing::Point(946, 161);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(382, 123);
			this->groupBox10->TabIndex = 4;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Ordenar por metodo Bubble Sort";
			// 
			// BtnBubbleDES2
			// 
			this->BtnBubbleDES2->Location = System::Drawing::Point(206, 32);
			this->BtnBubbleDES2->Name = L"BtnBubbleDES2";
			this->BtnBubbleDES2->Size = System::Drawing::Size(170, 67);
			this->BtnBubbleDES2->TabIndex = 2;
			this->BtnBubbleDES2->Text = L"Bubble Sort\r\nDescendente";
			this->BtnBubbleDES2->UseVisualStyleBackColor = true;
			this->BtnBubbleDES2->Click += gcnew System::EventHandler(this, &MyForm::BtnBubbleDES2_Click);
			// 
			// BtnBubbleAS2
			// 
			this->BtnBubbleAS2->Location = System::Drawing::Point(19, 32);
			this->BtnBubbleAS2->Name = L"BtnBubbleAS2";
			this->BtnBubbleAS2->Size = System::Drawing::Size(170, 67);
			this->BtnBubbleAS2->TabIndex = 1;
			this->BtnBubbleAS2->Text = L"Bubble Sort \r\nAscendente";
			this->BtnBubbleAS2->UseVisualStyleBackColor = true;
			this->BtnBubbleAS2->Click += gcnew System::EventHandler(this, &MyForm::BtnBubbleAS2_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(19, 39);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(8, 8);
			this->button10->TabIndex = 0;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->LblstoBublle2);
			this->groupBox11->Controls->Add(this->Lblstopquick2);
			this->groupBox11->Controls->Add(this->label9);
			this->groupBox11->Controls->Add(this->label10);
			this->groupBox11->Location = System::Drawing::Point(946, 453);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(376, 126);
			this->groupBox11->TabIndex = 11;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Tiempos de ejecucion de los metodos";
			// 
			// LblstoBublle2
			// 
			this->LblstoBublle2->AutoSize = true;
			this->LblstoBublle2->Location = System::Drawing::Point(118, 85);
			this->LblstoBublle2->Name = L"LblstoBublle2";
			this->LblstoBublle2->Size = System::Drawing::Size(16, 17);
			this->LblstoBublle2->TabIndex = 4;
			this->LblstoBublle2->TabStop = true;
			this->LblstoBublle2->Text = L"0";
			// 
			// Lblstopquick2
			// 
			this->Lblstopquick2->AutoSize = true;
			this->Lblstopquick2->Location = System::Drawing::Point(113, 43);
			this->Lblstopquick2->Name = L"Lblstopquick2";
			this->Lblstopquick2->Size = System::Drawing::Size(16, 17);
			this->Lblstopquick2->TabIndex = 3;
			this->Lblstopquick2->TabStop = true;
			this->Lblstopquick2->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 17);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Bubble Sort";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Quick Sort";
			// 
			// BtnSalir
			// 
			this->BtnSalir->Location = System::Drawing::Point(1224, 8);
			this->BtnSalir->Name = L"BtnSalir";
			this->BtnSalir->Size = System::Drawing::Size(155, 41);
			this->BtnSalir->TabIndex = 1;
			this->BtnSalir->Text = L"Salir";
			this->BtnSalir->UseVisualStyleBackColor = true;
			this->BtnSalir->Click += gcnew System::EventHandler(this, &MyForm::BtnSalir_Click);
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1391, 1001);
			this->Controls->Add(this->BtnSalir);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
		private: void ReestablecerMatriz() {
			dgvMatriz->Rows->Clear();
			dgvMatriz->Columns->Clear();
			dgvMatriz->ColumnHeadersVisible = false;
			dgvMatriz->RowHeadersVisible = false;
		};

private: System::Void BtnImportar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Se agregan los filtros al OpenFileDialog
	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";

	//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
		txtPath->Text = ofdImportar->FileName;

		//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
		//Importante haber llamado al namespace System::IO antes de usar File
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

		if (archivoLineas->Length > 0) {

			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(';');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;
				filas = archivoLineas->Length;

				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas; i++) {
					//Crea una columna
					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 85;
					//Le agrega el tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					//Inserta la columna
					dgvMatriz->Columns->Add(nuevacolumna);
				}

				//Agrega las filas de manera dinámica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dgvMatriz->Rows->Add();
				}

				//Llena el DatagridView
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(';');
					int j = 0;

					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
						j++;
					}
				}
			}
		}

	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void BtnSalir_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show("Espero, te halla servido, Feliz día!.", "Salir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	Environment::Exit(0);
}
	   void quicksort(array<double^>^ arreglo, int Inicio, int fin)
	   {
		   double pivote;
		   if (Inicio < fin)
		   {
			   pivote = divide(arreglo, Inicio, fin);
			   quicksort(arreglo, Inicio, pivote - 1);
			   quicksort(arreglo, pivote + 1, fin);
		   }
		   else
		   {
			   String^ imprimir = "";
			   for (int i = 0; i < arreglo->Length; i++)
			   {
				   imprimir += arreglo[i] + "\n";
			   }RtxtCOLORDENADAS->Text=imprimir;
		   }
	   }
	   double divide(array<double^>^arreglo, int Inicio, int fin)
	   {
		   int izquierda;
		   int derecha;
		   int pivote;
		   int temporal;

		   pivote = Convert::ToInt32(arreglo[Inicio]);
		   izquierda = Inicio;
		   derecha = fin;

		   while (izquierda<derecha)
		   {
			   while (Convert::ToInt32(arreglo[derecha])>pivote)
			   {
				   derecha++;
			   }
			   if (izquierda < derecha)
			   {
				   temporal =Convert::ToInt32(arreglo[izquierda]);
				   arreglo[izquierda] = arreglo[derecha];
				   (arreglo[derecha]) = Convert::ToDouble(temporal);
			   }
		   }
		   temporal =Convert::ToInt32(arreglo[derecha]);
		   arreglo[derecha] = arreglo[Inicio];
		   arreglo[Inicio] = Convert::ToDouble(temporal);
		   return derecha;
	   }
	 
private: System::Void BtnquickAS_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	try
	{
		Stopwatch^ StopWatchQuicksort = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (TxtCambioCol->Text == "Año")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
			}
			quicksort(aordenar, 1, aordenar->Length);
			StopWatchQuicksort->Stop();
			Lblquicksort->Text = StopWatchQuicksort->ElapsedMilliseconds + "";
		}
		else if (TxtCambioCol->Text == "Denuncias"||TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			for (int i = 1; i < (filas - 2); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			quicksort(aordenar, 0, aordenar->Length);
			StopWatchQuicksort->Stop();
			Lblquicksort->Text = StopWatchQuicksort->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void BtnQuickDES_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	try
	{
		Stopwatch^ StopWatchQuicksort = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (TxtCambioCol->Text == "Año" || TxtCambioCol->Text == "año" || TxtCambioCol->Text == "AÑO")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
			}
			quicksort(aordenar, aordenar->Length,1);
			StopWatchQuicksort->Stop();
			Lblquicksort->Text = StopWatchQuicksort->ElapsedMilliseconds + "";
		}
		else if (TxtCambioCol->Text == "Denuncias" || TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			
			for (int i = 1; i < (filas - 2); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			quicksort(aordenar, aordenar->Length, 0);
			StopWatchQuicksort->Stop();
			Lblquicksort->Text = StopWatchQuicksort->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
void Bubble(array<double^>^ arreglo, int numero)
{
	int aux=0;
	int i;
	int j;
	for ( i = 0; i < numero-1; i++)
	{
		for (j = i+1; j < numero; j++)
		{
			if (Convert::ToInt32( arreglo[i]) > Convert::ToInt32( arreglo[j]))
			{
				aux = Convert::ToInt32(arreglo[i]);
				arreglo[i] = arreglo[j];
				arreglo[j] = Convert::ToDouble(aux);
			}
			else
			{
				String^ imprimir = "";
				for (int i = 0; i < arreglo->Length; i++)
				{
					imprimir += arreglo[i] + "\n";
				}RtxtCOLORDENADAS->Text = imprimir;
			}
		}
	}
}
void Bubble_des(array<double^>^ arreglo, int numero)
{
	int aux = 0;
	int i;
	int j;
	for (i = 0; i < numero - 1; i++)
	{
		for (j = i + 1; j < numero; j++)
		{
			if (Convert::ToInt32(arreglo[i]) < Convert::ToInt32(arreglo[j]))
			{
				aux = Convert::ToInt32(arreglo[i]);
				arreglo[i] = arreglo[j];
				arreglo[j] = Convert::ToDouble(aux);
			}
			else
			{
				String^ imprimir = "";
				for (int i = 0; i < arreglo->Length; i++)
				{
					imprimir += arreglo[i] + "\n";
				}RtxtCOLORDENADAS->Text = imprimir;
			}
		}
	}
}
private: System::Void BtnBubbleAS_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchBubblesort = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (TxtCambioCol->Text == "Año" || TxtCambioCol->Text == "año" || TxtCambioCol->Text == "AÑO")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
			}
			Bubble(aordenar, aordenar->Length);
			StopWatchBubblesort->Stop();
			LblBubble->Text = StopWatchBubblesort->ElapsedMilliseconds + "";
		}
		else if (TxtCambioCol->Text == "Denuncias" || TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			Bubble(aordenar, aordenar->Length);
			StopWatchBubblesort->Stop();
			LblBubble->Text = StopWatchBubblesort->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnBubbleDES_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchBubblesort = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (TxtCambioCol->Text == "Año" || TxtCambioCol->Text == "año" || TxtCambioCol->Text == "AÑO")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
			}
			Bubble_des(aordenar, aordenar->Length);
			StopWatchBubblesort->Stop();
			LblBubble->Text = StopWatchBubblesort->ElapsedMilliseconds + "";
		}
		else if (TxtCambioCol->Text == "Denuncias" || TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			Bubble_des(aordenar, aordenar->Length);
			StopWatchBubblesort->Stop();
			LblBubble->Text = StopWatchBubblesort->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
void ordenar_MergeAs(array<double^>^ arreglo, int unit, int num)
{
	int num1;
	int num2;
	if (num>1)
	{
		num1 = num / 2;
		num2 = num - num1;
		ordenar_MergeAs(arreglo, unit, num1);
		ordenar_MergeAs(arreglo, unit+num1,num2);
		MergeAs(arreglo, unit, num1, num2,num);
	}
	String^ imprimir = "";
	for (int i = 0; i < arreglo->Length; i++)
	{
		imprimir += arreglo[i] + "\n";
	}
	RtxtCOLORDENADAS->Text = imprimir;
}
void MergeAs(array<double^>^ arreglo, int unit, int num,int num1, int num2)
{
	array<double^>^ aordenar = gcnew array<double^>(filas - 1);
	for (int i = 0; i < num; i++)
	{
		aordenar[i] = 0.00;
	}
	int temporal = 0;
	int temporal1 = 0;
	int temporal2 = 0;
	while ((temporal1<num1)&&(temporal2<num2))
	{
		//cambio aqui
		if (*arreglo[unit+temporal1]>*arreglo[unit+num1+temporal2])
		{
			aordenar[temporal++] = arreglo[unit + (temporal1++)];
		}
		else
		{
			aordenar[temporal++] = arreglo[unit + num1 + (temporal2++)];
		}
	}
	while (temporal1<num1)
	{
		aordenar[temporal++] = arreglo[unit + (temporal1++)];
	}
	while (temporal2<num2)
	{
		aordenar[temporal++] = arreglo[unit + num1 + (temporal2++)];
	}
	for (int i = 0; i < num1+num2; i++)
	{
		arreglo[unit + i] = aordenar[i];
	}
}
void ordenar_MergeDes(array<double^>^ arreglo, int unit, int num)
{
	int num1;
	int num2;
	if (num > 1)
	{
		num1 = num / 2;
		num2 = num - num1;
		ordenar_MergeDes(arreglo, unit, num1);
		ordenar_MergeDes(arreglo, unit + num1, num2);
		MergeDes(arreglo, unit, num1, num2, num);
	}
	String^ imprimir = "";
	for (int i = 0; i < arreglo->Length; i++)
	{
		imprimir += arreglo[i] + "\n";
	}
	RtxtCOLORDENADAS->Text = imprimir;
}
void MergeDes(array<double^>^ arreglo, int unit, int num, int num1, int num2)
{
	array<double^>^ aordenar = gcnew array<double^>(filas - 1);
	for (int i = 0; i < num; i++)
	{
		aordenar[i] = 0.00;
	}
	int temporal = 0;
	int temporal1 = 0;
	int temporal2 = 0;
	while ((temporal1 < num1) && (temporal2 < num2))
	{
		if (*arreglo[unit + temporal1] < * arreglo[unit + num1 + temporal2])
		{
			aordenar[temporal++] = arreglo[unit + (temporal1++)];
		}
		else
		{
			aordenar[temporal++] = arreglo[unit + num1 + (temporal2++)];
		}
	}
	while (temporal1 < num1)
	{
		aordenar[temporal++] = arreglo[unit + (temporal1++)];
	}
	while (temporal2 < num2)
	{
		aordenar[temporal++] = arreglo[unit + num1 + (temporal2++)];
	}
	for (int i = 0; i < num1 + num2; i++)
	{
		arreglo[unit + i] = aordenar[i];
	}
}

private: System::Void BtnMergeAS_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchMergesort = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (TxtCambioCol->Text == "Año" || TxtCambioCol->Text == "año" || TxtCambioCol->Text == "AÑO")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
			}
			ordenar_MergeAs(aordenar,0, aordenar->Length);
			StopWatchMergesort->Stop();
			LlbMerge->Text = StopWatchMergesort->ElapsedMilliseconds + "";
		}
		else if (TxtCambioCol->Text == "Denuncias" || TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			ordenar_MergeAs(aordenar, 0, aordenar->Length);
			StopWatchMergesort->Stop();
			LlbMerge->Text = StopWatchMergesort->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnMergeDes_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchMergesort = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (TxtCambioCol->Text == "Año" || TxtCambioCol->Text == "año" || TxtCambioCol->Text == "AÑO")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
			}
			ordenar_MergeDes(aordenar, 0, aordenar->Length);
			StopWatchMergesort->Stop();
			LlbMerge->Text = StopWatchMergesort->ElapsedMilliseconds + "";
		}
		else if (TxtCambioCol->Text == "Denuncias" || TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			ordenar_MergeDes(aordenar, 0, aordenar->Length);
			StopWatchMergesort->Stop();
			LlbMerge->Text = StopWatchMergesort->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnImportar2_Click(System::Object^ sender, System::EventArgs^ e) 

{
	//Se agregan los filtros al OpenFileDialog
	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";

	//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
		txtPath2->Text = ofdImportar->FileName;

		//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
		//Importante haber llamado al namespace System::IO antes de usar File
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

		if (archivoLineas->Length > 0) {

			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(';');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;
				filas = archivoLineas->Length;

				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas; i++) {
					//Crea una columna
					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 85;
					//Le agrega el tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					//Inserta la columna
					dgvMatriz2->Columns->Add(nuevacolumna);
				}

				//Agrega las filas de manera dinámica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dgvMatriz2->Rows->Add();
				}

				//Llena el DatagridView
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(';');
					int j = 0;

					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dgvMatriz2->Rows[i]->Cells[j]->Value = fila[j];
						j++;
					}
				}
			}
		}

	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
	   void BubleAsLista(array<double^>^ arreglo, int numero)
	   {
		   int aux = 0;
		   int i;
		   int j;
		   for (i = 0; i < numero - 1; i++)
		   {
			   for (j = i + 1; j < numero; j++)
			   {
				   if (Convert::ToInt32(arreglo[i]) > Convert::ToInt32(arreglo[j]))
				   {
					   aux = Convert::ToInt32(arreglo[i]);
					   arreglo[i] = arreglo[j];
					   arreglo[j] = Convert::ToDouble(aux);
				   }
				   else
				   {
					   String^ imprimir = "";
					   for (int i = 0; i < arreglo->Length; i++)
					   {
						   imprimir += arreglo[i] + "\n";
					   }
					   RtxtDatosordenados->Text = imprimir;
				   }
			   }
		   }
	   }
	   void BubbleDesLista(array<double^>^ arreglo, int numero)
	   {
		   int aux = 0;
		   int i;
		   int j;
		   for (i = 0; i < numero - 1; i++)
		   {
			   for (j = i + 1; j < numero; j++)
			   {
				   if (Convert::ToInt32(arreglo[i]) < Convert::ToInt32(arreglo[j]))
				   {
					   aux = Convert::ToInt32(arreglo[i]);
					   arreglo[i] = arreglo[j];
					   arreglo[j] = Convert::ToDouble(aux);
				   }
				   else
				   {
					   String^ imprimir = "";
					   for (int i = 0; i < arreglo->Length; i++)
					   {
						   imprimir += arreglo[i] + "\n";
					   }
					   RtxtDatosordenados->Text = imprimir;
				   }
			   }
		   }
	   }
private: System::Void BtnBubbleAS2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchBubble2 = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (txtFilascambio1->Text == "Total cases" || txtFilascambio1->Text == "total cases" || txtFilascambio1->Text == "TOTAL CASES" || txtFilascambio1->Text == "Total Cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz2->Rows[i]->Cells[2]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Deaths" || txtFilascambio1->Text == "total deaths" || txtFilascambio1->Text == "TOTAL DEATHS" || txtFilascambio1->Text == "Total deaths")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[3]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
				StopWatchBubble2->Stop();
				LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Recovered" || txtFilascambio1->Text == "total recovered" || txtFilascambio1->Text == "TOTAL RECOVERED" || txtFilascambio1->Text == "Total recovered")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[4]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Active Cases" || txtFilascambio1->Text == "active cases" || txtFilascambio1->Text == "ACTIVE CASES" || txtFilascambio1->Text == "Active cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[5]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Serious, Critical" || txtFilascambio1->Text == "serious, critical" || txtFilascambio1->Text == "SERIOUS, CRITICAL" )
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[6]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tot Cases/ 1M pop" || txtFilascambio1->Text == "tot cases/ 1M pop" || txtFilascambio1->Text == "TOT CASES/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[7]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Deaths/ 1M pop" || txtFilascambio1->Text == "deaths/ 1M pop" || txtFilascambio1->Text == "DEATHS/ 1M POP" )
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[8]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Tests" || txtFilascambio1->Text == "total tests" || txtFilascambio1->Text == "TOTAL TESTS" || txtFilascambio1->Text == "Total tests")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[9]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tests/ 1M pop" || txtFilascambio1->Text == "tests/ 1M pop" || txtFilascambio1->Text == "TESTS / 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[10]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Population" || txtFilascambio1->Text == "population" || txtFilascambio1->Text == "POPULATION")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[11]->Value);
			}
			BubleAsLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnBubbleDES2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchBubble2 = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (txtFilascambio1->Text == "Total cases" || txtFilascambio1->Text == "total cases" || txtFilascambio1->Text == "TOTAL CASES" || txtFilascambio1->Text == "Total Cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz2->Rows[i]->Cells[2]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Deaths" || txtFilascambio1->Text == "total deaths" || txtFilascambio1->Text == "TOTAL DEATHS" || txtFilascambio1->Text == "Total deaths")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[3]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Recovered" || txtFilascambio1->Text == "total recovered" || txtFilascambio1->Text == "TOTAL RECOVERED" || txtFilascambio1->Text == "Total recovered")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[4]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Active Cases" || txtFilascambio1->Text == "active cases" || txtFilascambio1->Text == "ACTIVE CASES" || txtFilascambio1->Text == "Active cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[5]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Serious, Critical" || txtFilascambio1->Text == "serious, critical" || txtFilascambio1->Text == "SERIOUS, CRITICAL")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[6]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tot Cases/ 1M pop" || txtFilascambio1->Text == "tot cases/ 1M pop" || txtFilascambio1->Text == "TOT CASES/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[7]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Deaths/ 1M pop" || txtFilascambio1->Text == "deaths/ 1M pop" || txtFilascambio1->Text == "DEATHS/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[8]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Tests" || txtFilascambio1->Text == "total tests" || txtFilascambio1->Text == "TOTAL TESTS" || txtFilascambio1->Text == "Total tests")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[9]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tests/ 1M pop" || txtFilascambio1->Text == "tests/ 1M pop" || txtFilascambio1->Text == "TESTS / 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[10]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Population" || txtFilascambio1->Text == "population" || txtFilascambio1->Text == "POPULATION")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[11]->Value);
			}
			BubbleDesLista(aordenar, aordenar->Length);
			StopWatchBubble2->Stop();
			LblstoBublle2->Text = StopWatchBubble2->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
void quicksortLista(array<double^>^ arreglo, int Inicio, int fin)
{
	double pivote;
	if (Inicio < fin)
	{
		pivote = divideLista(arreglo, Inicio, fin);
		quicksortLista(arreglo, Inicio, pivote - 1);
		quicksortLista(arreglo, pivote + 1, fin);
	}
	else
	{
		String^ imprimir = "";
		for (int i = 0; i < arreglo->Length; i++)
		{
			imprimir += arreglo[i] + "\n";
		}
		RtxtDatosordenados->Text = imprimir;
	}
}
double divideLista(array<double^>^ arreglo, int Inicio, int fin)
{
	int izquierda;
	int derecha;
	int pivote;
	int temporal;

	pivote = Convert::ToInt32(arreglo[Inicio]);
	izquierda = Inicio;
	derecha = fin;

	while (izquierda < derecha)
	{
		while (Convert::ToInt32(arreglo[derecha]) > pivote)
		{
			derecha++;
		}
		if (izquierda < derecha)
		{
			temporal = Convert::ToInt32(arreglo[izquierda]);
			arreglo[izquierda] = arreglo[derecha];
			(arreglo[derecha]) = Convert::ToDouble(temporal);
		}
	}
	temporal = Convert::ToInt32(arreglo[derecha]);
	arreglo[derecha] = arreglo[Inicio];
	arreglo[Inicio] = Convert::ToDouble(temporal);
	return derecha;
}

private: System::Void BtnQuickAS2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchQuicksortLista = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (txtFilascambio1->Text == "Total cases" || txtFilascambio1->Text == "total cases" || txtFilascambio1->Text == "TOTAL CASES" || txtFilascambio1->Text == "Total Cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Deaths" || txtFilascambio1->Text == "total deaths" || txtFilascambio1->Text == "TOTAL DEATHS" || txtFilascambio1->Text == "Total deaths")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[3]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Recovered" || txtFilascambio1->Text == "total recovered" || txtFilascambio1->Text == "TOTAL RECOVERED" || txtFilascambio1->Text == "Total recovered")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[4]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Active Cases" || txtFilascambio1->Text == "active cases" || txtFilascambio1->Text == "ACTIVE CASES" || txtFilascambio1->Text == "Active cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[5]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Serious, Critical" || txtFilascambio1->Text == "serious, critical" || txtFilascambio1->Text == "SERIOUS, CRITICAL")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[6]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tot Cases/ 1M pop" || txtFilascambio1->Text == "tot cases/ 1M pop" || txtFilascambio1->Text == "TOT CASES/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[7]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Deaths/ 1M pop" || txtFilascambio1->Text == "deaths/ 1M pop" || txtFilascambio1->Text == "DEATHS/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[8]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Tests" || txtFilascambio1->Text == "total tests" || txtFilascambio1->Text == "TOTAL TESTS" || txtFilascambio1->Text == "Total tests")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[9]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tests/ 1M pop" || txtFilascambio1->Text == "tests/ 1M pop" || txtFilascambio1->Text == "TESTS / 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[10]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Population" || txtFilascambio1->Text == "population" || txtFilascambio1->Text == "POPULATION")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[11]->Value);
			}
			quicksortLista(aordenar, 0, aordenar->Length);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnQuickDES2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		Stopwatch^ StopWatchQuicksortLista = Stopwatch::StartNew();
		array<double^>^ aordenar = gcnew array<double^>(filas - 1);
		if (txtFilascambio1->Text == "Total cases" || txtFilascambio1->Text == "total cases" || txtFilascambio1->Text == "TOTAL CASES" || txtFilascambio1->Text == "Total Cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Deaths" || txtFilascambio1->Text == "total deaths" || txtFilascambio1->Text == "TOTAL DEATHS" || txtFilascambio1->Text == "Total deaths")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[3]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Recovered" || txtFilascambio1->Text == "total recovered" || txtFilascambio1->Text == "TOTAL RECOVERED" || txtFilascambio1->Text == "Total recovered")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[4]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Active Cases" || txtFilascambio1->Text == "active cases" || txtFilascambio1->Text == "ACTIVE CASES" || txtFilascambio1->Text == "Active cases")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[5]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Serious, Critical" || txtFilascambio1->Text == "serious, critical" || txtFilascambio1->Text == "SERIOUS, CRITICAL")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[6]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tot Cases/ 1M pop" || txtFilascambio1->Text == "tot cases/ 1M pop" || txtFilascambio1->Text == "TOT CASES/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[7]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Deaths/ 1M pop" || txtFilascambio1->Text == "deaths/ 1M pop" || txtFilascambio1->Text == "DEATHS/ 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[8]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Total Tests" || txtFilascambio1->Text == "total tests" || txtFilascambio1->Text == "TOTAL TESTS" || txtFilascambio1->Text == "Total tests")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[9]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Tests/ 1M pop" || txtFilascambio1->Text == "tests/ 1M pop" || txtFilascambio1->Text == "TESTS / 1M POP")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[10]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else if (txtFilascambio1->Text == "Population" || txtFilascambio1->Text == "population" || txtFilascambio1->Text == "POPULATION")
		{
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[11]->Value);
			}
			quicksortLista(aordenar, aordenar->Length, 0);
			StopWatchQuicksortLista->Stop();
			Lblquicksort->Text = StopWatchQuicksortLista->ElapsedMilliseconds + "";
		}
		else
		{
			MessageBox::Show("Ingrese el Nombre como se le indica en pantalla", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
