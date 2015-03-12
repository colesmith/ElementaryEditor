#pragma once

namespace Ex3_4_1_菜单栏 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// textArea 摘要
	/// </summary>
	public ref class textArea : public System::Windows::Forms::Form
	{
	public:
		textArea(void)
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
		~textArea()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  textAreaPanel;
	protected: 

	protected: 

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
			this->textAreaPanel = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// textAreaPanel
			// 
			this->textAreaPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textAreaPanel->Location = System::Drawing::Point(0, 0);
			this->textAreaPanel->Name = L"textAreaPanel";
			this->textAreaPanel->Size = System::Drawing::Size(284, 261);
			this->textAreaPanel->TabIndex = 0;
			this->textAreaPanel->Text = L"";
			// 
			// textArea
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textAreaPanel);
			this->Name = L"textArea";
			this->Text = L"textArea";
			this->Load += gcnew System::EventHandler(this, &textArea::textArea_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textArea_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
