#pragma once

#include <wx/richtext/richtextctrl.h>

#include "Connection.h"

enum cmd
{
	ID_Connect = 1
};

class MainFrame : public wxFrame
{
public:
	MainFrame();
	~MainFrame();

	void FilterSeq(std::vector<std::string>& recv, std::vector<std::string> &esc);

	void loop(std::vector<std::string> &recv, std::vector<std::string> &Colours);

	void AnsiEsc(std::vector<std::string>& esc);


	wxTextCtrl *m_textCtrl1 = nullptr;
	wxTextCtrl *m_textCtrl3 = nullptr;

	//std::vector<char> recv;

	wxFont font;
	
	Connection con1;
	std::vector<std::string> recv;
	std::vector<std::string> esc;

private:
	void OnExit(wxCommandEvent& event);
	void OnConnect(wxCommandEvent& event);
	void OnSend(wxCommandEvent & event);

	//void OnChar(wxKeyEvent & event);

	wxDECLARE_EVENT_TABLE();
	
};

