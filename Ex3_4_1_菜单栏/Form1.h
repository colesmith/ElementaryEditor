#pragma once

namespace Ex3_4_1_�˵��� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  file;
	private: System::Windows::Forms::ToolStripMenuItem^  fileNew;
	private: System::Windows::Forms::ToolStripMenuItem^  fileOpen;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSave;
	private: System::Windows::Forms::ToolStripMenuItem^  fileSaveAs;
	private: System::Windows::Forms::ToolStripMenuItem^  exit;
	private: System::Windows::Forms::ToolStripMenuItem^  �༭ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cancel;
	private: System::Windows::Forms::ToolStripMenuItem^  textCut;
	private: System::Windows::Forms::ToolStripMenuItem^  textCopy;

	private: System::Windows::Forms::ToolStripMenuItem^  �鿴VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  about;

	private: System::Windows::Forms::ToolStripMenuItem^  textPaste;
	private: System::Windows::Forms::ToolStripMenuItem^  textDelete;
	private: System::Windows::Forms::ToolStripMenuItem^  textSearch;
	private: System::Windows::Forms::ToolStripMenuItem^  textSearchNext;
	private: System::Windows::Forms::ToolStripMenuItem^  textReplace;
	private: System::Windows::Forms::ToolStripMenuItem^  textGoTo;
	private: System::Windows::Forms::ToolStripMenuItem^  textSelectAll;
	private: System::Windows::Forms::ToolStripMenuItem^  textDateTime;
	private: System::Windows::Forms::ToolStripMenuItem^  textAutoIndent;
	private: System::Windows::Forms::ToolStripMenuItem^  textFont;
	private: System::Windows::Forms::ToolStripMenuItem^  statusLine;
	private: System::Windows::Forms::ToolStripMenuItem^  getHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ڼ��±�AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pageSetting;
	private: System::Windows::Forms::ToolStripMenuItem^  printer;


	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->file = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileNew = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->about = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cancel = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textCopy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textPaste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textSearch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textSearchNext = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textReplace = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textGoTo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textSelectAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textDateTime = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textAutoIndent = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textFont = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusLine = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ڼ��±�AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pageSetting = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->file, this->�༭ToolStripMenuItem, 
				this->��ʽOToolStripMenuItem, this->�鿴VToolStripMenuItem, this->about});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(732, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// file
			// 
			this->file->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->fileNew, this->fileOpen, 
				this->fileSave, this->fileSaveAs, this->pageSetting, this->printer, this->exit});
			this->file->Name = L"file";
			this->file->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F));
			this->file->Size = System::Drawing::Size(57, 20);
			this->file->Text = L"�ļ�(F)";
			// 
			// fileNew
			// 
			this->fileNew->Name = L"fileNew";
			this->fileNew->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt) 
				| System::Windows::Forms::Keys::N));
			this->fileNew->Size = System::Drawing::Size(168, 22);
			this->fileNew->Text = L"�½�";
			this->fileNew->Click += gcnew System::EventHandler(this, &Form1::fileNew_Click);
			// 
			// fileOpen
			// 
			this->fileOpen->Name = L"fileOpen";
			this->fileOpen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->fileOpen->Size = System::Drawing::Size(168, 22);
			this->fileOpen->Text = L"��";
			this->fileOpen->Click += gcnew System::EventHandler(this, &Form1::fileOpen_Click);
			// 
			// fileSave
			// 
			this->fileSave->Name = L"fileSave";
			this->fileSave->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->fileSave->Size = System::Drawing::Size(168, 22);
			this->fileSave->Text = L"����";
			this->fileSave->Click += gcnew System::EventHandler(this, &Form1::fileSave_Click);
			// 
			// fileSaveAs
			// 
			this->fileSaveAs->Name = L"fileSaveAs";
			this->fileSaveAs->Size = System::Drawing::Size(168, 22);
			this->fileSaveAs->Text = L"���Ϊ(A)";
			this->fileSaveAs->Click += gcnew System::EventHandler(this, &Form1::fileSaveAs_Click);
			// 
			// exit
			// 
			this->exit->Name = L"exit";
			this->exit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exit->Size = System::Drawing::Size(168, 22);
			this->exit->Text = L"�˳�";
			// 
			// �༭ToolStripMenuItem
			// 
			this->�༭ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->cancel, 
				this->textCut, this->textCopy, this->textPaste, this->textDelete, this->textSearch, this->textSearchNext, this->textReplace, 
				this->textGoTo, this->textSelectAll, this->textDateTime});
			this->�༭ToolStripMenuItem->Name = L"�༭ToolStripMenuItem";
			this->�༭ToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->�༭ToolStripMenuItem->Text = L"�༭(E)";
			this->�༭ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�༭ToolStripMenuItem_Click);
			// 
			// ��ʽOToolStripMenuItem
			// 
			this->��ʽOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->textAutoIndent, 
				this->textFont});
			this->��ʽOToolStripMenuItem->Name = L"��ʽOToolStripMenuItem";
			this->��ʽOToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->��ʽOToolStripMenuItem->Text = L"��ʽ(O)";
			// 
			// �鿴VToolStripMenuItem
			// 
			this->�鿴VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->statusLine});
			this->�鿴VToolStripMenuItem->Name = L"�鿴VToolStripMenuItem";
			this->�鿴VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->�鿴VToolStripMenuItem->Text = L"�鿴(V)";
			// 
			// about
			// 
			this->about->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->getHelp, this->���ڼ��±�AToolStripMenuItem});
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(60, 20);
			this->about->Text = L"����(H)";
			// 
			// cancel
			// 
			this->cancel->Name = L"cancel";
			this->cancel->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->cancel->Size = System::Drawing::Size(172, 22);
			this->cancel->Text = L"����(U)";
			// 
			// textCut
			// 
			this->textCut->Name = L"textCut";
			this->textCut->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->textCut->Size = System::Drawing::Size(172, 22);
			this->textCut->Text = L"����(T)";
			// 
			// textCopy
			// 
			this->textCopy->Name = L"textCopy";
			this->textCopy->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->textCopy->Size = System::Drawing::Size(172, 22);
			this->textCopy->Text = L"����(C)";
			// 
			// textPaste
			// 
			this->textPaste->Name = L"textPaste";
			this->textPaste->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->textPaste->Size = System::Drawing::Size(172, 22);
			this->textPaste->Text = L"ճ��(P)";
			// 
			// textDelete
			// 
			this->textDelete->Name = L"textDelete";
			this->textDelete->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->textDelete->Size = System::Drawing::Size(172, 22);
			this->textDelete->Text = L"ɾ��(L)";
			// 
			// textSearch
			// 
			this->textSearch->Name = L"textSearch";
			this->textSearch->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->textSearch->Size = System::Drawing::Size(172, 22);
			this->textSearch->Text = L"����(F)";
			// 
			// textSearchNext
			// 
			this->textSearchNext->Name = L"textSearchNext";
			this->textSearchNext->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->textSearchNext->Size = System::Drawing::Size(172, 22);
			this->textSearchNext->Text = L"������һ��(N)";
			// 
			// textReplace
			// 
			this->textReplace->Name = L"textReplace";
			this->textReplace->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->textReplace->Size = System::Drawing::Size(172, 22);
			this->textReplace->Text = L"�滻(R)";
			// 
			// textGoTo
			// 
			this->textGoTo->Name = L"textGoTo";
			this->textGoTo->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::G));
			this->textGoTo->Size = System::Drawing::Size(172, 22);
			this->textGoTo->Text = L"ת��(G)";
			// 
			// textSelectAll
			// 
			this->textSelectAll->Name = L"textSelectAll";
			this->textSelectAll->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->textSelectAll->Size = System::Drawing::Size(172, 22);
			this->textSelectAll->Text = L"ȫѡ(A)";
			// 
			// textDateTime
			// 
			this->textDateTime->Name = L"textDateTime";
			this->textDateTime->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->textDateTime->Size = System::Drawing::Size(172, 22);
			this->textDateTime->Text = L"ʱ��/����(D)";
			// 
			// textAutoIndent
			// 
			this->textAutoIndent->Name = L"textAutoIndent";
			this->textAutoIndent->Size = System::Drawing::Size(152, 22);
			this->textAutoIndent->Text = L"���л���(W)";
			// 
			// textFont
			// 
			this->textFont->Name = L"textFont";
			this->textFont->Size = System::Drawing::Size(152, 22);
			this->textFont->Text = L"����(F)";
			// 
			// statusLine
			// 
			this->statusLine->Name = L"statusLine";
			this->statusLine->Size = System::Drawing::Size(152, 22);
			this->statusLine->Text = L"״̬��(S)";
			// 
			// getHelp
			// 
			this->getHelp->Name = L"getHelp";
			this->getHelp->Size = System::Drawing::Size(152, 22);
			this->getHelp->Text = L"�鿴����(H)";
			this->getHelp->Click += gcnew System::EventHandler(this, &Form1::�鿴����ToolStripMenuItem_Click);
			// 
			// ���ڼ��±�AToolStripMenuItem
			// 
			this->���ڼ��±�AToolStripMenuItem->Name = L"���ڼ��±�AToolStripMenuItem";
			this->���ڼ��±�AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->���ڼ��±�AToolStripMenuItem->Text = L"���ڼ��±�(A)";
			// 
			// pageSetting
			// 
			this->pageSetting->Name = L"pageSetting";
			this->pageSetting->Size = System::Drawing::Size(168, 22);
			this->pageSetting->Text = L"ҳ������(U)";
			// 
			// printer
			// 
			this->printer->Name = L"printer";
			this->printer->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->printer->Size = System::Drawing::Size(168, 22);
			this->printer->Text = L"��ӡ(P)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 437);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elementary Editor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fileNew_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show(L"�½��ļ�");
			 }
	private: System::Void fileOpen_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show(L"���ļ�");
			 }
	private: System::Void fileSave_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show(L"�����ļ�");
			 }
private: System::Void fileSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"���Ϊ");
		 }
private: System::Void �༭ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void �鿴����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

