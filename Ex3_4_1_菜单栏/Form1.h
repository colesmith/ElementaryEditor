#pragma once

namespace Ex3_4_1_菜单栏 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::ToolStripMenuItem^  编辑ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  格式OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cancel;
	private: System::Windows::Forms::ToolStripMenuItem^  textCut;
	private: System::Windows::Forms::ToolStripMenuItem^  textCopy;

	private: System::Windows::Forms::ToolStripMenuItem^  查看VToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^  关于记事本AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pageSetting;
	private: System::Windows::Forms::ToolStripMenuItem^  printer;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
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
			this->编辑ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->关于记事本AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pageSetting = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->file, this->编辑ToolStripMenuItem, 
				this->格式OToolStripMenuItem, this->查看VToolStripMenuItem, this->about});
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
			this->file->Text = L"文件(F)";
			// 
			// fileNew
			// 
			this->fileNew->Name = L"fileNew";
			this->fileNew->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt) 
				| System::Windows::Forms::Keys::N));
			this->fileNew->Size = System::Drawing::Size(168, 22);
			this->fileNew->Text = L"新建";
			this->fileNew->Click += gcnew System::EventHandler(this, &Form1::fileNew_Click);
			// 
			// fileOpen
			// 
			this->fileOpen->Name = L"fileOpen";
			this->fileOpen->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->fileOpen->Size = System::Drawing::Size(168, 22);
			this->fileOpen->Text = L"打开";
			this->fileOpen->Click += gcnew System::EventHandler(this, &Form1::fileOpen_Click);
			// 
			// fileSave
			// 
			this->fileSave->Name = L"fileSave";
			this->fileSave->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->fileSave->Size = System::Drawing::Size(168, 22);
			this->fileSave->Text = L"保存";
			this->fileSave->Click += gcnew System::EventHandler(this, &Form1::fileSave_Click);
			// 
			// fileSaveAs
			// 
			this->fileSaveAs->Name = L"fileSaveAs";
			this->fileSaveAs->Size = System::Drawing::Size(168, 22);
			this->fileSaveAs->Text = L"另存为(A)";
			this->fileSaveAs->Click += gcnew System::EventHandler(this, &Form1::fileSaveAs_Click);
			// 
			// exit
			// 
			this->exit->Name = L"exit";
			this->exit->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exit->Size = System::Drawing::Size(168, 22);
			this->exit->Text = L"退出";
			// 
			// 编辑ToolStripMenuItem
			// 
			this->编辑ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->cancel, 
				this->textCut, this->textCopy, this->textPaste, this->textDelete, this->textSearch, this->textSearchNext, this->textReplace, 
				this->textGoTo, this->textSelectAll, this->textDateTime});
			this->编辑ToolStripMenuItem->Name = L"编辑ToolStripMenuItem";
			this->编辑ToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->编辑ToolStripMenuItem->Text = L"编辑(E)";
			this->编辑ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::编辑ToolStripMenuItem_Click);
			// 
			// 格式OToolStripMenuItem
			// 
			this->格式OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->textAutoIndent, 
				this->textFont});
			this->格式OToolStripMenuItem->Name = L"格式OToolStripMenuItem";
			this->格式OToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->格式OToolStripMenuItem->Text = L"格式(O)";
			// 
			// 查看VToolStripMenuItem
			// 
			this->查看VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->statusLine});
			this->查看VToolStripMenuItem->Name = L"查看VToolStripMenuItem";
			this->查看VToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->查看VToolStripMenuItem->Text = L"查看(V)";
			// 
			// about
			// 
			this->about->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->getHelp, this->关于记事本AToolStripMenuItem});
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(60, 20);
			this->about->Text = L"帮助(H)";
			// 
			// cancel
			// 
			this->cancel->Name = L"cancel";
			this->cancel->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->cancel->Size = System::Drawing::Size(172, 22);
			this->cancel->Text = L"撤销(U)";
			// 
			// textCut
			// 
			this->textCut->Name = L"textCut";
			this->textCut->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->textCut->Size = System::Drawing::Size(172, 22);
			this->textCut->Text = L"剪切(T)";
			// 
			// textCopy
			// 
			this->textCopy->Name = L"textCopy";
			this->textCopy->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->textCopy->Size = System::Drawing::Size(172, 22);
			this->textCopy->Text = L"复制(C)";
			// 
			// textPaste
			// 
			this->textPaste->Name = L"textPaste";
			this->textPaste->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->textPaste->Size = System::Drawing::Size(172, 22);
			this->textPaste->Text = L"粘贴(P)";
			// 
			// textDelete
			// 
			this->textDelete->Name = L"textDelete";
			this->textDelete->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->textDelete->Size = System::Drawing::Size(172, 22);
			this->textDelete->Text = L"删除(L)";
			// 
			// textSearch
			// 
			this->textSearch->Name = L"textSearch";
			this->textSearch->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->textSearch->Size = System::Drawing::Size(172, 22);
			this->textSearch->Text = L"查找(F)";
			// 
			// textSearchNext
			// 
			this->textSearchNext->Name = L"textSearchNext";
			this->textSearchNext->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->textSearchNext->Size = System::Drawing::Size(172, 22);
			this->textSearchNext->Text = L"查找下一个(N)";
			// 
			// textReplace
			// 
			this->textReplace->Name = L"textReplace";
			this->textReplace->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->textReplace->Size = System::Drawing::Size(172, 22);
			this->textReplace->Text = L"替换(R)";
			// 
			// textGoTo
			// 
			this->textGoTo->Name = L"textGoTo";
			this->textGoTo->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::G));
			this->textGoTo->Size = System::Drawing::Size(172, 22);
			this->textGoTo->Text = L"转到(G)";
			// 
			// textSelectAll
			// 
			this->textSelectAll->Name = L"textSelectAll";
			this->textSelectAll->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->textSelectAll->Size = System::Drawing::Size(172, 22);
			this->textSelectAll->Text = L"全选(A)";
			// 
			// textDateTime
			// 
			this->textDateTime->Name = L"textDateTime";
			this->textDateTime->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->textDateTime->Size = System::Drawing::Size(172, 22);
			this->textDateTime->Text = L"时间/日期(D)";
			// 
			// textAutoIndent
			// 
			this->textAutoIndent->Name = L"textAutoIndent";
			this->textAutoIndent->Size = System::Drawing::Size(152, 22);
			this->textAutoIndent->Text = L"自行换行(W)";
			// 
			// textFont
			// 
			this->textFont->Name = L"textFont";
			this->textFont->Size = System::Drawing::Size(152, 22);
			this->textFont->Text = L"字体(F)";
			// 
			// statusLine
			// 
			this->statusLine->Name = L"statusLine";
			this->statusLine->Size = System::Drawing::Size(152, 22);
			this->statusLine->Text = L"状态栏(S)";
			// 
			// getHelp
			// 
			this->getHelp->Name = L"getHelp";
			this->getHelp->Size = System::Drawing::Size(152, 22);
			this->getHelp->Text = L"查看帮助(H)";
			this->getHelp->Click += gcnew System::EventHandler(this, &Form1::查看帮助ToolStripMenuItem_Click);
			// 
			// 关于记事本AToolStripMenuItem
			// 
			this->关于记事本AToolStripMenuItem->Name = L"关于记事本AToolStripMenuItem";
			this->关于记事本AToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->关于记事本AToolStripMenuItem->Text = L"关于记事本(A)";
			// 
			// pageSetting
			// 
			this->pageSetting->Name = L"pageSetting";
			this->pageSetting->Size = System::Drawing::Size(168, 22);
			this->pageSetting->Text = L"页面设置(U)";
			// 
			// printer
			// 
			this->printer->Name = L"printer";
			this->printer->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->printer->Size = System::Drawing::Size(168, 22);
			this->printer->Text = L"打印(P)";
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
				 MessageBox::Show(L"新建文件");
			 }
	private: System::Void fileOpen_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show(L"打开文件");
			 }
	private: System::Void fileSave_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show(L"保存文件");
			 }
private: System::Void fileSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"另存为");
		 }
private: System::Void 编辑ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void 查看帮助ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

