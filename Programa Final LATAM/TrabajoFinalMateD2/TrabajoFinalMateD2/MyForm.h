#pragma once
#include "Datos_Matriz.h"
namespace TrabajoFinalMateD2 {

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
	private:
		DatosM* datos;

	public:
		MyForm(void)
		{
			datos = new DatosM();
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(34, 229);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(257, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(509, 229);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(320, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(683, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 268);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(793, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(36, 294);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(793, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(36, 320);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(793, 20);
			this->textBox3->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(859, 157);
			this->panel1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Brown;
			this->label2->Font = (gcnew System::Drawing::Font(L"Stencil", 14.27027F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(6, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 27);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Vuelos LATAM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SlateGray;
			this->panel2->Location = System::Drawing::Point(-1, 148);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(875, 14);
			this->panel2->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(373, -9);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(121, 114);
			this->panel3->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 7.135135F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 14);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ciudad de Origen:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SlateGray;
			this->panel4->Location = System::Drawing::Point(-16, 155);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(26, 360);
			this->panel4->TabIndex = 8;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::SlateGray;
			this->panel5->Location = System::Drawing::Point(846, 151);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(26, 395);
			this->panel5->TabIndex = 9;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::SlateGray;
			this->panel6->Location = System::Drawing::Point(-10, 430);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(875, 14);
			this->panel6->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Stencil", 7.135135F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(506, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 14);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ciudad de Destino:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(36, 380);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(579, 30);
			this->listBox1->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Stencil", 7.135135F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 14);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Pais:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Stencil", 7.135135F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(506, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 14);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Pais:";
			// 
			// comboBox3
			// 
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(36, 177);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(255, 21);
			this->comboBox3->TabIndex = 16;
			// 
			// comboBox4
			// 
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(509, 177);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(206, 21);
			this->comboBox4->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(297, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Filtrar Origen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(721, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Filtrar Destino";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 7.135135F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 14);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Conexiones:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(859, 442);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Metodo Solo Lectura:
				 comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
				 comboBox2->DropDownStyle = ComboBoxStyle::DropDownList;
				 comboBox3->DropDownStyle = ComboBoxStyle::DropDownList;
				 comboBox4->DropDownStyle = ComboBoxStyle::DropDownList;

				 //Vector con todos los paises, repetidos tambn
				 string* Paises = new string[a];
				 for (int i = 0; i < a; i++){
					 Paises[i] = datos->Separar(datos->GetCiudad(i))[1];
				 }
				 //Si el pais se repite, le ponemos vacio:
				 int paisesRepetidos = 0;
				 for (int i = 0; i < a;i++){
					 for (int j = i+1; j < a;j++){
						 if (Paises[i]==Paises[j]){
							 Paises[j] = " ";
						 }
					 }
				 }		
				//Mostramos en los combobox y listbox:
				 for (int i = 0; i < a; i++){
					 String^ aux2 = gcnew String(Paises[i].c_str());
					 if (aux2 != " "){
						 comboBox3->Items->Add(aux2);
						 comboBox4->Items->Add(aux2);
					 }			
				 }		
				
	}	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox1->Text != ""){
					 if (comboBox2->Text != ""){
						 string* Auxiliar = new string[3];

						 //Conversion de String^ a string:
						 string a1;
						 string a2;
						 MarshalString(comboBox1->Text, a1);
						 MarshalString(comboBox2->Text, a2);
						
						 Auxiliar = datos->MostrarTrayectorias(a1, a2); //Aqui se ejecuta el calculo de las trayectorias
						 textBox1->Text = gcnew String(Auxiliar[0].c_str());
						 textBox2->Text = gcnew String(Auxiliar[1].c_str());
						 textBox3->Text = gcnew String(Auxiliar[2].c_str());
					
						 //Mostramos las conexiones:					
						 String^ aux2 = gcnew String(datos->MostrarConexion(a1, a2, datos->matriz_caminos).c_str());
						 listBox1->Items->Clear();
						 if(aux2!="null")listBox1->Items->Add(aux2);				 
					 }
					 else MessageBox::Show("Seleccione la Ciudad destino");
				 }
				 else MessageBox::Show("Seleccione la Ciudad de origen");
	}
	//Funcion de Converson de String^ a string: Opcion 2:
	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox3->Text != "") {
				 comboBox1->Items->Clear();
				 comboBox1->Enabled = true;
				 //Agrego todos los q pertenescan a ese pais:
				 for (int i = 0; i < a; i++){
					 String^ aux = gcnew String(datos->Separar(datos->GetCiudad(i))[1].c_str());
					 if (aux == comboBox3->Text){
						 comboBox1->Items->Add(gcnew String(datos->Separar(datos->GetCiudad(i))[0].c_str()));
					 }
				 }
			 }
			 else MessageBox::Show("Seleccione el País Origen");

}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox4->Text != "") {
				 comboBox2->Items->Clear();
				 comboBox2->Enabled = true;
				 //Agrego todos los q pertenescan a ese pais:
				 for (int i = 0; i < a; i++){
					 String^ aux = gcnew String(datos->Separar(datos->GetCiudad(i))[1].c_str());
					 if (aux == comboBox4->Text){
						 comboBox2->Items->Add(gcnew String(datos->Separar(datos->GetCiudad(i))[0].c_str()));
					 }
				 }
			 }
			 else MessageBox::Show("Seleccione el País Destino");
}
private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Escape) Application::Exit();
}
};
}
