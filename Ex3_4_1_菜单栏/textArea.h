#pragma once

namespace Ex3_4_1_�˵��� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// textArea ժҪ
	/// </summary>
	public ref class textArea : public System::Windows::Forms::Form
	{
	public:
		textArea(void)
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
