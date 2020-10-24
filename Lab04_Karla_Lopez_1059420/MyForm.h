#pragma once
#define Max 1000
namespace Lab04KarlaLopez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
			this->BtnSalir = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1355, 967);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
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
			// 
			// BtnMergeAS
			// 
			this->BtnMergeAS->Location = System::Drawing::Point(19, 32);
			this->BtnMergeAS->Name = L"BtnMergeAS";
			this->BtnMergeAS->Size = System::Drawing::Size(170, 67);
			this->BtnMergeAS->TabIndex = 1;
			this->BtnMergeAS->Text = L"Merge Sort \r\nAscendente";
			this->BtnMergeAS->UseVisualStyleBackColor = true;
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
			// 
			// BtnBubbleAS
			// 
			this->BtnBubbleAS->Location = System::Drawing::Point(19, 32);
			this->BtnBubbleAS->Name = L"BtnBubbleAS";
			this->BtnBubbleAS->Size = System::Drawing::Size(170, 67);
			this->BtnBubbleAS->TabIndex = 1;
			this->BtnBubbleAS->Text = L"Bubble Sort \r\nAscendente";
			this->BtnBubbleAS->UseVisualStyleBackColor = true;
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
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1347, 938);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
		
		if (TxtCambioCol->Text == "Año"||TxtCambioCol->Text=="año"||TxtCambioCol->Text=="AÑO")
		{
			array<double^>^ aordenar = gcnew array<double^>(filas - 1);
			for (int i = 1; i < (filas - 1); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[1]->Value);
				quicksort(aordenar, 0, aordenar->Length);
			}
		}
		else if (TxtCambioCol->Text == "Denuncias"||TxtCambioCol->Text == "denuncias" || TxtCambioCol->Text == "DENUNCIAS")
		{
			array<double^>^ aordenar = gcnew array<double^>(filas - 1);
			for (int i = 1; i < (filas - 2); i++)
			{
				aordenar[i] = Convert::ToDouble(dgvMatriz->Rows[i]->Cells[2]->Value);
				quicksort(aordenar, 0, aordenar->Length);
			}
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
