///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Dialogs.h"

#include "res/add196.png.h"
#include "res/delete99.png.h"
#include "res/edit45.png.h"
#include "res/left37.png.h"
#include "res/list1.png.h"
#include "res/open127.png.h"
#include "res/right133.png.h"
#include "res/save15.png.h"
#include "res/settings48.png.h"
#include "res/trash30.png.h"

///////////////////////////////////////////////////////////////////////////

RibbonFrameBase::RibbonFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	m_mgr.SetManagedWindow(this);
	m_mgr.SetFlags(wxAUI_MGR_DEFAULT);
	
	m_ribbonBar1 = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE );
	m_ribbonBar1->SetArtProvider(new wxRibbonDefaultArtProvider); 
	m_mgr.AddPane( m_ribbonBar1, wxAuiPaneInfo() .Top() .CaptionVisible( false ).CloseButton( false ).PaneBorder( false ).Movable( false ).Dock().Fixed().DockFixed( false ).BottomDockable( false ).LeftDockable( false ).RightDockable( false ).Floatable( false ).BestSize( wxSize( -1,130 ) ).MinSize( wxSize( -1,130 ) ).Layer( 1000 ) );
	
	m_ribbonPage3 = new wxRibbonPage( m_ribbonBar1, wxID_ANY, wxT("NF05Lab") , wxNullBitmap , 0 );
	m_ribbonBar1->SetActivePage( m_ribbonPage3 ); 
	m_ribbonPanel7 = new wxRibbonPanel( m_ribbonPage3, wxID_ANY, wxT("Fichier") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar6 = new wxRibbonButtonBar( m_ribbonPanel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar6->AddButton( OUVRIR_BOUTTON, wxT("Ouvrir"), open127_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonButtonBar6->AddButton( ENREGISTRER_BOUTTON, wxT("Enregistrer"), save15_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonPanel3 = new wxRibbonPanel( m_ribbonPage3, wxID_ANY, wxT("Exécution") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar3 = new wxRibbonButtonBar( m_ribbonPanel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar3->AddButton( EXECUTER_COMMANDE_BOUTON_ID, wxT("Exécuter la commande"), right133_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonButtonBar3->AddButton( EFFACER_RESULTAT_BOUTON_ID, wxT("Effacer les résultats"), left37_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonPanel2 = new wxRibbonPanel( m_ribbonPage3, wxID_ANY, wxT("Gestion des variables") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar2 = new wxRibbonButtonBar( m_ribbonPanel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar2->AddButton( AJOUTER_VARIABLE_BOUTON_ID, wxT("Ajouter..."), add196_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonButtonBar2->AddButton( EDITER_VARIABLE_BOUTON_ID, wxT("Editer..."), edit45_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonButtonBar2->AddButton( SUPPRIMER_VARIABLE_BOUTON_ID, wxT("Supprimer"), delete99_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonButtonBar2->AddButton( BOUTTON_VIDER_VARIABLES, wxT("Supprimer toutes les variables"), trash30_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonPanel6 = new wxRibbonPanel( m_ribbonPage3, wxID_ANY, wxT("Fenêtres") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_barreBoutonsAffichage = new wxRibbonButtonBar( m_ribbonPanel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_barreBoutonsAffichage->AddToggleButton( BOUTON_AFFICHAGE_VARIABLES, wxT("Afficher la liste des variables"), list1_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonPanel5 = new wxRibbonPanel( m_ribbonPage3, wxID_ANY, wxT("Systèmes") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar5 = new wxRibbonButtonBar( m_ribbonPanel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar5->AddButton( RESOUDRE_SYTEME, wxT("Résoudre système"), settings48_png_to_wx_bitmap(), wxEmptyString);
	m_ribbonPage5 = new wxRibbonPage( m_ribbonBar1, wxID_ANY, wxT("?") , wxNullBitmap , 0 );
	m_ribbonPage5->Hide();
	
	m_ribbonBar1->Realize();
	
	m_panneauPrincipal = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_mgr.AddPane( m_panneauPrincipal, wxAuiPaneInfo() .Center() .CaptionVisible( false ).CloseButton( false ).PaneBorder( false ).Movable( false ).Dock().Resizable().FloatingSize( wxDefaultSize ).DockFixed( false ).BottomDockable( false ).TopDockable( false ).LeftDockable( false ).RightDockable( false ).Floatable( false ) );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->AddGrowableCol( 0 );
	fgSizer3->AddGrowableRow( 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_zoneResultats = new wxTextCtrl( m_panneauPrincipal, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	m_zoneResultats->SetFont( wxFont( 12, 75, 90, 90, false, wxT("Consolas") ) );
	
	fgSizer3->Add( m_zoneResultats, 0, wxALL|wxEXPAND, 5 );
	
	m_zoneCommande = new wxTextCtrl( m_panneauPrincipal, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	m_zoneCommande->SetFont( wxFont( 12, 75, 90, 90, false, wxT("Consolas") ) );
	
	fgSizer3->Add( m_zoneCommande, 0, wxALL|wxEXPAND, 5 );
	
	
	m_panneauPrincipal->SetSizer( fgSizer3 );
	m_panneauPrincipal->Layout();
	fgSizer3->Fit( m_panneauPrincipal );
	m_panneauVariables = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_mgr.AddPane( m_panneauVariables, wxAuiPaneInfo() .Name( wxT("panneauVariables") ).Left() .Caption( wxT("Variables") ).PinButton( true ).Dock().Resizable().FloatingSize( wxSize( 400,250 ) ).DockFixed( false ).BestSize( wxSize( 200,100 ) ).MinSize( wxSize( 200,100 ) ) );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1->AddGrowableCol( 0 );
	fgSizer1->AddGrowableRow( 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_arbreVariables = new wxTreeCtrl( m_panneauVariables, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	fgSizer1->Add( m_arbreVariables, 0, wxALL|wxEXPAND, 0 );
	
	
	m_panneauVariables->SetSizer( fgSizer1 );
	m_panneauVariables->Layout();
	fgSizer1->Fit( m_panneauVariables );
	m_arbreSyntaxe = new wxTreeCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	m_mgr.AddPane( m_arbreSyntaxe, wxAuiPaneInfo() .Right() .Caption( wxT("Arbre syntaxique") ).PinButton( true ).Dock().Resizable().FloatingSize( wxDefaultSize ).DockFixed( false ).BestSize( wxSize( 200,-1 ) ).MinSize( wxSize( 200,-1 ) ) );
	
	
	m_mgr.Update();
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RibbonFrameBase::OnExit ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBAR_PAGE_CHANGED, wxRibbonBarEventHandler( RibbonFrameBase::SurChangementOngletRuban ) );
	this->Connect( OUVRIR_BOUTTON, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicOuvrir ) );
	this->Connect( ENREGISTRER_BOUTTON, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicEnregistrer ) );
	this->Connect( EXECUTER_COMMANDE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicExecuterCommande ) );
	this->Connect( EFFACER_RESULTAT_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicEffacerResultats ) );
	this->Connect( AJOUTER_VARIABLE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicAjouterVariable ) );
	this->Connect( EDITER_VARIABLE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicEditerVariable ) );
	this->Connect( SUPPRIMER_VARIABLE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicSupprimerVariable ) );
	this->Connect( BOUTTON_VIDER_VARIABLES, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicViderVariables ) );
	this->Connect( BOUTON_AFFICHAGE_VARIABLES, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxCommandEventHandler( RibbonFrameBase::SurClicAffichageVariables ) );
	this->Connect( RESOUDRE_SYTEME, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicBouttonResoudreSysteme ) );
	m_zoneCommande->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( RibbonFrameBase::SurValidationCommande ), NULL, this );
}

RibbonFrameBase::~RibbonFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RibbonFrameBase::OnExit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBAR_PAGE_CHANGED, wxRibbonBarEventHandler( RibbonFrameBase::SurChangementOngletRuban ) );
	this->Disconnect( OUVRIR_BOUTTON, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicOuvrir ) );
	this->Disconnect( ENREGISTRER_BOUTTON, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicEnregistrer ) );
	this->Disconnect( EXECUTER_COMMANDE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicExecuterCommande ) );
	this->Disconnect( EFFACER_RESULTAT_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicEffacerResultats ) );
	this->Disconnect( AJOUTER_VARIABLE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicAjouterVariable ) );
	this->Disconnect( EDITER_VARIABLE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicEditerVariable ) );
	this->Disconnect( SUPPRIMER_VARIABLE_BOUTON_ID, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicSupprimerVariable ) );
	this->Disconnect( BOUTTON_VIDER_VARIABLES, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicViderVariables ) );
	this->Disconnect( BOUTON_AFFICHAGE_VARIABLES, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxCommandEventHandler( RibbonFrameBase::SurClicAffichageVariables ) );
	this->Disconnect( RESOUDRE_SYTEME, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( RibbonFrameBase::SurClicBouttonResoudreSysteme ) );
	m_zoneCommande->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( RibbonFrameBase::SurValidationCommande ), NULL, this );
	
	m_mgr.UnInit();
	
}

ResolutionSystemeDialogueBase::ResolutionSystemeDialogueBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6->AddGrowableCol( 0 );
	fgSizer6->AddGrowableRow( 2 );
	fgSizer6->AddGrowableRow( 4 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer7;
	fgSizer7 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer7->SetFlexibleDirection( wxBOTH );
	fgSizer7->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nombre d'équations :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	fgSizer7->Add( m_staticText2, 0, wxALL, 5 );
	
	m_equationsSpin = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 10000000, 1 );
	fgSizer7->Add( m_equationsSpin, 0, wxALL, 5 );
	
	BoutonValiderSysteme = new wxButton( this, BOUTON_VALIDER_SYSTEME, wxT("Valider"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer7->Add( BoutonValiderSysteme, 0, wxALL, 5 );
	
	
	fgSizer6->Add( fgSizer7, 1, wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Application :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer6->Add( m_staticText3, 0, wxALL, 5 );
	
	m_tableauMatriceSysteme = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_tableauMatriceSysteme->CreateGrid( 0, 0 );
	m_tableauMatriceSysteme->EnableEditing( true );
	m_tableauMatriceSysteme->EnableGridLines( true );
	m_tableauMatriceSysteme->EnableDragGridSize( false );
	m_tableauMatriceSysteme->SetMargins( 0, 0 );
	
	// Columns
	m_tableauMatriceSysteme->EnableDragColMove( false );
	m_tableauMatriceSysteme->EnableDragColSize( true );
	m_tableauMatriceSysteme->SetColLabelSize( 30 );
	m_tableauMatriceSysteme->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_tableauMatriceSysteme->EnableDragRowSize( true );
	m_tableauMatriceSysteme->SetRowLabelSize( 80 );
	m_tableauMatriceSysteme->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_tableauMatriceSysteme->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	fgSizer6->Add( m_tableauMatriceSysteme, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Vecteur"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	fgSizer6->Add( m_staticText4, 0, wxALL, 5 );
	
	m_tableauVecteurSysteme = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_tableauVecteurSysteme->CreateGrid( 0, 0 );
	m_tableauVecteurSysteme->EnableEditing( true );
	m_tableauVecteurSysteme->EnableGridLines( true );
	m_tableauVecteurSysteme->EnableDragGridSize( false );
	m_tableauVecteurSysteme->SetMargins( 0, 0 );
	
	// Columns
	m_tableauVecteurSysteme->EnableDragColMove( false );
	m_tableauVecteurSysteme->EnableDragColSize( true );
	m_tableauVecteurSysteme->SetColLabelSize( 30 );
	m_tableauVecteurSysteme->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_tableauVecteurSysteme->EnableDragRowSize( true );
	m_tableauVecteurSysteme->SetRowLabelSize( 80 );
	m_tableauVecteurSysteme->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_tableauVecteurSysteme->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	fgSizer6->Add( m_tableauVecteurSysteme, 0, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer9;
	fgSizer9 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer9->SetFlexibleDirection( wxBOTH );
	fgSizer9->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_bouttonResoudre = new wxButton( this, wxID_ANY, wxT("Résoudre"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer9->Add( m_bouttonResoudre, 0, wxALL, 5 );
	
	
	fgSizer6->Add( fgSizer9, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BoutonValiderSysteme->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ResolutionSystemeDialogueBase::SurClicBoutonValiderSysteme ), NULL, this );
	m_bouttonResoudre->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ResolutionSystemeDialogueBase::SurCLicBouttonResoudre ), NULL, this );
}

ResolutionSystemeDialogueBase::~ResolutionSystemeDialogueBase()
{
	// Disconnect Events
	BoutonValiderSysteme->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ResolutionSystemeDialogueBase::SurClicBoutonValiderSysteme ), NULL, this );
	m_bouttonResoudre->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ResolutionSystemeDialogueBase::SurCLicBouttonResoudre ), NULL, this );
	
}

AjoutMatriceDialogueBase::AjoutMatriceDialogueBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer4->AddGrowableCol( 0 );
	fgSizer4->AddGrowableRow( 1 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer5->AddGrowableCol( 4 );
	fgSizer5->AddGrowableRow( 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Nom"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	fgSizer5->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_nomMatriceChoices[] = { wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"), wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"), wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"), wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z") };
	int m_nomMatriceNChoices = sizeof( m_nomMatriceChoices ) / sizeof( wxString );
	m_nomMatrice = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_nomMatriceNChoices, m_nomMatriceChoices, 0 );
	m_nomMatrice->SetSelection( 26 );
	fgSizer5->Add( m_nomMatrice, 0, wxALL, 5 );
	
	m_lignesSpin = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 10000000, 1 );
	fgSizer5->Add( m_lignesSpin, 0, wxALL, 5 );
	
	m_colonnesSpin = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 10000000, 1 );
	fgSizer5->Add( m_colonnesSpin, 0, wxALL, 5 );
	
	BoutonValider = new wxButton( this, VALIDER_TAILLE_MATRICE_ID, wxT("Changer la taille"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( BoutonValider, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer4->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	m_tableauMatrice = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_tableauMatrice->CreateGrid( 0, 0 );
	m_tableauMatrice->EnableEditing( true );
	m_tableauMatrice->EnableGridLines( true );
	m_tableauMatrice->EnableDragGridSize( false );
	m_tableauMatrice->SetMargins( 0, 0 );
	
	// Columns
	m_tableauMatrice->EnableDragColMove( false );
	m_tableauMatrice->EnableDragColSize( true );
	m_tableauMatrice->SetColLabelSize( 30 );
	m_tableauMatrice->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_tableauMatrice->EnableDragRowSize( true );
	m_tableauMatrice->SetRowLabelSize( 80 );
	m_tableauMatrice->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_tableauMatrice->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	fgSizer4->Add( m_tableauMatrice, 0, wxALL|wxEXPAND, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1Save = new wxButton( this, wxID_SAVE );
	m_sdbSizer1->AddButton( m_sdbSizer1Save );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	
	fgSizer4->Add( m_sdbSizer1, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer4 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	BoutonValider->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjoutMatriceDialogueBase::SurClicValiderTailleMatrice ), NULL, this );
	m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjoutMatriceDialogueBase::SurClicAnnuler ), NULL, this );
	m_sdbSizer1Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjoutMatriceDialogueBase::SurClicSauver ), NULL, this );
}

AjoutMatriceDialogueBase::~AjoutMatriceDialogueBase()
{
	// Disconnect Events
	BoutonValider->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjoutMatriceDialogueBase::SurClicValiderTailleMatrice ), NULL, this );
	m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjoutMatriceDialogueBase::SurClicAnnuler ), NULL, this );
	m_sdbSizer1Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AjoutMatriceDialogueBase::SurClicSauver ), NULL, this );
	
}
