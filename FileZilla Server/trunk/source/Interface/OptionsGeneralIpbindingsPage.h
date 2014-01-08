// FileZilla Server - a Windows ftp server

// Copyright (C) 2004 - Tim Kosse <tim.kosse@filezilla-project.org>

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

class COptionsGeneralIpbindingsPage : public COptionsPage
{
public:
	COptionsGeneralIpbindingsPage(COptionsDlg *pOptionsDlg, CWnd* pParent = NULL);   // Standardkonstruktor
	virtual ~COptionsGeneralIpbindingsPage();

// Dialogfelddaten
	enum { IDD = IDD_OPTIONS_GENERAL_IPBINDINGS };

	virtual BOOL IsDataValid();
	virtual void SaveData();
	virtual void LoadData();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung

	DECLARE_MESSAGE_MAP()
public:
	CString m_bindings;
};