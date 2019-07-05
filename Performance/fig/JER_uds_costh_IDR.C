void JER_uds_costh_IDR()
{
//=========Macro generated from canvas: can_JES_uds_rel/Jet Energy, uds samples
//=========  (Fri Jun 28 13:55:05 2019) by ROOT version 6.16/00
   TCanvas *can_JES_uds_rel = new TCanvas("can_JES_uds_rel", "Jet Energy, uds samples",33,45,600,600);

   TLegend *leg = new TLegend(0.24,0.5,0.45,0.75,NULL,"brNDC");

   gStyle->SetOptStat(0);
   can_JES_uds_rel->Range(-0.307361,0.2812194,0. ,11.84675);
   can_JES_uds_rel->SetFillColor(10);
   can_JES_uds_rel->SetBorderMode(0);
   can_JES_uds_rel->SetBorderSize(2);
   can_JES_uds_rel->SetTickx(1);
   can_JES_uds_rel->SetTicky(1);
   can_JES_uds_rel->SetLeftMargin(0.17);
   can_JES_uds_rel->SetRightMargin(0.08);
   can_JES_uds_rel->SetTopMargin(0.08);
   can_JES_uds_rel->SetBottomMargin(0.18);
   can_JES_uds_rel->SetFrameLineWidth(2);
   can_JES_uds_rel->SetFrameBorderMode(0);
   can_JES_uds_rel->SetFrameLineWidth(2);
   can_JES_uds_rel->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("multi_JES_uds_rel");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[13] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.9125,
   0.9375,
   0.9625,
   0.9875};
   Double_t Graph_fy1001[13] = {
   3.313174,
   2.941095,
   2.986524,
   2.900492,
   2.829659,
   2.81173,
   2.897333,
   2.969746,
   2.842582,
   3.181133,
   3.211278,
   3.602203,
   6.457424};
   Double_t Graph_fex1001[13] = {
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048};
   Double_t Graph_fey1001[13] = {
   0.03165903,
   0.02773754,
   0.02774234,
   0.02614861,
   0.02484452,
   0.02352274,
   0.02314315,
   0.02264739,
   0.02075098,
   0.04526956,
   0.04505532,
   0.0492437,
   0.08675697};
   TGraphErrors *gre = new TGraphErrors(13,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("500 GeV");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph_Graph105110561001 = new TH1F("Graph_Graph_Graph_Graph105110561001","500 GeV",100,0,1.08125);
   Graph_Graph_Graph_Graph105110561001->SetMinimum(2.41261);
   Graph_Graph_Graph_Graph105110561001->SetMaximum(6.919778);
   Graph_Graph_Graph_Graph105110561001->SetDirectory(0);
   Graph_Graph_Graph_Graph105110561001->SetStats(0);
   Graph_Graph_Graph_Graph105110561001->SetLineWidth(2);
   Graph_Graph_Graph_Graph105110561001->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph105110561001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105110561001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105110561001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105110561001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105110561001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105110561001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105110561001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105110561001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph105110561001);
   
   leg->AddEntry(gre,"250 GeV Jets","elp");

   multigraph->Add(gre,"");
   
   Double_t Graph_fx1002[13] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.9125,
   0.9375,
   0.9625,
   0.9875};
   Double_t Graph_fy1002[13] = {
   3.212434,
   2.913939,
   2.862937,
   2.819745,
   2.828824,
   2.775125,
   2.879647,
   3.002619,
   2.905488,
   3.146214,
   3.310092,
   3.637207,
   6.713061};
   Double_t Graph_fex1002[13] = {
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048};
   Double_t Graph_fey1002[13] = {
   0.03058629,
   0.02762927,
   0.02643512,
   0.02534967,
   0.02455951,
   0.0230868,
   0.02310232,
   0.02274973,
   0.0211304,
   0.04452982,
   0.04550627,
   0.04993732,
   0.09228939};
   gre = new TGraphErrors(13,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("350 GeV");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph_Graph105210571002 = new TH1F("Graph_Graph_Graph_Graph105210571002","350 GeV",100,0,1.08125);
   Graph_Graph_Graph_Graph105210571002->SetMinimum(2.346707);
   Graph_Graph_Graph_Graph105210571002->SetMaximum(7.210682);
   Graph_Graph_Graph_Graph105210571002->SetDirectory(0);
   Graph_Graph_Graph_Graph105210571002->SetStats(0);
   Graph_Graph_Graph_Graph105210571002->SetLineWidth(2);
   Graph_Graph_Graph_Graph105210571002->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph105210571002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105210571002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105210571002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105210571002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105210571002->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105210571002->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105210571002->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105210571002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph105210571002);
   
   leg->AddEntry(gre,"175 GeV Jets","elp");
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[13] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.9125,
   0.9375,
   0.9625,
   0.9875};
   Double_t Graph_fy1003[13] = {
   3.173455,
   2.892958,
   2.897303,
   2.904608,
   2.888637,
   2.944772,
   2.964553,
   3.127952,
   3.17592,
   3.361042,
   3.600675,
   3.998973,
   7.477546};
   Double_t Graph_fex1003[13] = {
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048};
   Double_t Graph_fey1003[13] = {
   0.03033779,
   0.02715585,
   0.02668428,
   0.02600146,
   0.02483477,
   0.02435526,
   0.02367932,
   0.02397127,
   0.02297414,
   0.04704096,
   0.04978421,
   0.05515957,
   0.1011126};
   gre = new TGraphErrors(13,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("200 GeV");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph_Graph105310581003 = new TH1F("Graph_Graph_Graph_Graph105310581003","200 GeV",100,0,1.08125);
   Graph_Graph_Graph_Graph105310581003->SetMinimum(2.392317);
   Graph_Graph_Graph_Graph105310581003->SetMaximum(8.050144);
   Graph_Graph_Graph_Graph105310581003->SetDirectory(0);
   Graph_Graph_Graph_Graph105310581003->SetStats(0);
   Graph_Graph_Graph_Graph105310581003->SetLineWidth(2);
   Graph_Graph_Graph_Graph105310581003->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph105310581003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105310581003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105310581003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105310581003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105310581003->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105310581003->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105310581003->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105310581003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph105310581003);
   
   leg->AddEntry(gre,"100 GeV Jets","elp");
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1004[13] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.9125,
   0.9375,
   0.9625,
   0.9875};
   Double_t Graph_fy1004[13] = {
   3.770856,
   3.633681,
   3.656482,
   3.624243,
   3.646139,
   3.659721,
   3.785933,
   4.022907,
   4.160261,
   4.346035,
   4.585993,
   5.062993,
   8.631158};
   Double_t Graph_fex1004[13] = {
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048};
   Double_t Graph_fey1004[13] = {
   0.03592921,
   0.03409841,
   0.03356832,
   0.03231426,
   0.03135775,
   0.03045435,
   0.02987912,
   0.03051863,
   0.0298697,
   0.06051353,
   0.06261069,
   0.06810859,
   0.1154212};
   gre = new TGraphErrors(13,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
   gre->SetName("Graph");
   gre->SetTitle("91 GeV");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph_Graph105410591004 = new TH1F("Graph_Graph_Graph_Graph105410591004","91 GeV",100,0,1.08125);
   Graph_Graph_Graph_Graph105410591004->SetMinimum(3.076463);
   Graph_Graph_Graph_Graph105410591004->SetMaximum(9.262044);
   Graph_Graph_Graph_Graph105410591004->SetDirectory(0);
   Graph_Graph_Graph_Graph105410591004->SetStats(0);
   Graph_Graph_Graph_Graph105410591004->SetLineWidth(2);
   Graph_Graph_Graph_Graph105410591004->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph105410591004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105410591004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105410591004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105410591004->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105410591004->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105410591004->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105410591004->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105410591004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph105410591004);
   
   leg->AddEntry(gre," 45 GeV Jets","elp");
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1005[13] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.9125,
   0.9375,
   0.9625,
   0.9875};
   Double_t Graph_fy1005[13] = {
   5.546133,
   5.479965,
   5.424047,
   5.5534,
   5.537539,
   5.559921,
   5.705365,
   6.019603,
   6.376593,
   6.421888,
   6.728107,
   7.239055,
   10.39138};
   Double_t Graph_fex1005[13] = {
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048,
   0.048};
   Double_t Graph_fey1005[13] = {
   0.05191242,
   0.05091752,
   0.04931156,
   0.04946969,
   0.0475768,
   0.0457595,
   0.0451911,
   0.0456096,
   0.04589615,
   0.08957383,
   0.09325724,
   0.09931434,
   0.1411086};
   gre = new TGraphErrors(13,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("40 GeV");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetLineWidth(3);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph_Graph_Graph105510601005 = new TH1F("Graph_Graph_Graph_Graph105510601005","40 GeV",100,0,1.08125);
   Graph_Graph_Graph_Graph105510601005->SetMinimum(4.85896);
   Graph_Graph_Graph_Graph105510601005->SetMaximum(11.04827);
   Graph_Graph_Graph_Graph105510601005->SetDirectory(0);
   Graph_Graph_Graph_Graph105510601005->SetStats(0);
   Graph_Graph_Graph_Graph105510601005->SetLineWidth(2);
   Graph_Graph_Graph_Graph105510601005->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph105510601005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105510601005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph105510601005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph105510601005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph105510601005->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph105510601005->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph105510601005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph105510601005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph105510601005);
   
   leg->AddEntry(gre," 20 GeV Jets","elp");
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle(" |cos(#theta)|");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle(" RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.1);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TPaveText *pt = new TPaveText(0.2,0.8,0.4,0.9,"tbNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(3);
   pt->SetTextAlign(13);
   pt->SetTextColor(15);
   pt->SetTextFont(42);
   pt->SetTextSize(0.0625);
   TText *pt_LaTex = pt->AddText("ILD Preliminary");
   pt->Draw();
   
//fg    TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
//fg    leg->SetBorderSize(0);
//fg    leg->SetTextFont(62);
//fg    leg->SetLineColor(1);
//fg    leg->SetLineStyle(1);
//fg    leg->SetLineWidth(3);
//fg    leg->SetFillColor(0);
//fg    leg->SetFillStyle(1001);
//fg    TLegendEntry *entry=leg->AddEntry("Graph","250 GeV Jets","elp");
//fg    entry->SetLineColor(1);
//fg    entry->SetLineStyle(1);
//fg    entry->SetLineWidth(1);
//fg    entry->SetMarkerColor(1);
//fg    entry->SetMarkerStyle(21);
//fg    entry->SetMarkerSize(1);
//fg    entry=leg->AddEntry("Graph","175 GeV Jets","elp");
//fg    entry->SetLineColor(kRed);
//fg    entry->SetLineStyle(1);
//fg    entry->SetLineWidth(1);
//fg    entry->SetMarkerColor(1);
//fg    entry->SetMarkerStyle(21);
//fg    entry->SetMarkerSize(1);
//fg    entry=leg->AddEntry("Graph","100 GeV Jets","elp");
//fg    entry->SetLineColor(kGreen);
//fg    entry->SetLineStyle(1);
//fg    entry->SetLineWidth(1);
//fg    entry->SetMarkerColor(1);
//fg    entry->SetMarkerStyle(21);
//fg    entry->SetMarkerSize(1);
//fg    entry=leg->AddEntry("Graph"," 45 GeV Jets","elp");
//fg    entry->SetLineColor(kBlue);
//fg    entry->SetLineStyle(1);
//fg    entry->SetLineWidth(1);
//fg    entry->SetMarkerColor(1);
//fg    entry->SetMarkerStyle(21);
//fg    entry->SetMarkerSize(1);
//fg    entry=leg->AddEntry("Graph"," 20 GeV Jets","elp");
//fg    entry->SetLineColor(8);
//fg    entry->SetLineStyle(1);
//fg    entry->SetLineWidth(1);
//fg    entry->SetMarkerColor(8);
//fg    entry->SetMarkerStyle(21);
//fg    entry->SetMarkerSize(1);

   leg->Draw();
   can_JES_uds_rel->Modified();
   can_JES_uds_rel->cd();
   can_JES_uds_rel->SetSelected(can_JES_uds_rel);

   
   can_JES_uds_rel->SaveAs("JER_uds_costh_IDR.pdf");

}
