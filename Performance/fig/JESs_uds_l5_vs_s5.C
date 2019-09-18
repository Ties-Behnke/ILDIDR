void JESs_uds_l5_vs_s5()
{
//=========Macro generated from canvas: JESs/Jet energy scale
//=========  (Tue Jul  2 16:54:14 2019) by ROOT version6.08/06
   TCanvas *JESs = new TCanvas("JESs", "Jet energy scale",0,0,650,650);
   gStyle->SetOptStat(0);
   JESs->Range(0,0,1,1);
   JESs->SetFillColor(10);
   JESs->SetBorderMode(0);
   JESs->SetBorderSize(2);
   JESs->SetTickx(1);
   JESs->SetTicky(1);
   JESs->SetLeftMargin(0.2);
   JESs->SetRightMargin(0.08);
   JESs->SetTopMargin(0.08);
   JESs->SetBottomMargin(0.18);
   JESs->SetFrameLineWidth(2);
   JESs->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-65.71333,-11.64639,292.7033,317.6318);
   pad1->SetFillColor(10);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.2);
   pad1->SetRightMargin(0.08);
   pad1->SetTopMargin(0.1142857);
   pad1->SetBottomMargin(0.005);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1001[5] = {
   19.55869,
   45.07405,
   99.50565,
   173.7816,
   248.3218};
   Double_t Graph_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1001[5] = {
   0.7769609,
   1.219451,
   2.240213,
   3.854026,
   5.759164};
   TGraphErrors *gre = new TGraphErrors(5,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy scale, cos(#theta) < 0.7;Jet energy [GeV];Reconstructed jet energy [GeV]");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Jet energy scale, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(277.6109);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineWidth(2);
   Graph_Graph1001->SetMarkerStyle(20);
   Graph_Graph1001->SetMarkerSize(0.7);
   Graph_Graph1001->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph1001->GetXaxis()->SetNdivisions(506);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Reconstructed jet energy [GeV]");
   Graph_Graph1001->GetYaxis()->SetNdivisions(506);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *PerfectJesL7A1002 = new TF1("PerfectJesL7A","x",0,510);
   PerfectJesL7A1002->SetFillColor(19);
   PerfectJesL7A1002->SetFillStyle(0);
   PerfectJesL7A1002->SetLineColor(2);
   PerfectJesL7A1002->SetLineWidth(2);
   PerfectJesL7A1002->GetXaxis()->SetNdivisions(506);
   PerfectJesL7A1002->GetXaxis()->SetLabelFont(42);
   PerfectJesL7A1002->GetXaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1002->GetXaxis()->SetLabelSize(0.06);
   PerfectJesL7A1002->GetXaxis()->SetTitleSize(0.07);
   PerfectJesL7A1002->GetXaxis()->SetTitleFont(42);
   PerfectJesL7A1002->GetYaxis()->SetNdivisions(506);
   PerfectJesL7A1002->GetYaxis()->SetLabelFont(42);
   PerfectJesL7A1002->GetYaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1002->GetYaxis()->SetLabelSize(0.06);
   PerfectJesL7A1002->GetYaxis()->SetTitleSize(0.07);
   PerfectJesL7A1002->GetYaxis()->SetTitleOffset(1.1);
   PerfectJesL7A1002->GetYaxis()->SetTitleFont(42);
   gre->GetListOfFunctions()->Add(PerfectJesL7A1002);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1003[5] = {
   19.58089,
   45.17291,
   99.71094,
   174.4173,
   248.7633};
   Double_t Graph_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[5] = {
   0.7697989,
   1.167858,
   2.075245,
   3.564418,
   5.212665};
   TGraphErrors* gre2 = new TGraphErrors(5,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre2->SetName("Graph");
   gre2->SetTitle("Jet energy scale, cos(#theta) < 0.7;Jet energy [GeV];Reconstructed jet energy [GeV]");

   ci = TColor::GetColor("#0000ff");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(20);
   gre2->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Jet energy scale, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(277.4925);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);
   Graph_Graph1003->SetLineWidth(2);
   Graph_Graph1003->SetMarkerStyle(20);
   Graph_Graph1003->SetMarkerSize(0.7);
   Graph_Graph1003->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph1003->GetXaxis()->SetNdivisions(506);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Reconstructed jet energy [GeV]");
   Graph_Graph1003->GetYaxis()->SetNdivisions(506);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph1003);
   
   
   TF1 *PerfectJesL7A1004 = new TF1("PerfectJesL7A","x",0,510);
   PerfectJesL7A1004->SetFillColor(19);
   PerfectJesL7A1004->SetFillStyle(0);
   PerfectJesL7A1004->SetLineColor(2);
   PerfectJesL7A1004->SetLineWidth(2);
   PerfectJesL7A1004->GetXaxis()->SetNdivisions(506);
   PerfectJesL7A1004->GetXaxis()->SetLabelFont(42);
   PerfectJesL7A1004->GetXaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1004->GetXaxis()->SetLabelSize(0.06);
   PerfectJesL7A1004->GetXaxis()->SetTitleSize(0.07);
   PerfectJesL7A1004->GetXaxis()->SetTitleFont(42);
   PerfectJesL7A1004->GetYaxis()->SetNdivisions(506);
   PerfectJesL7A1004->GetYaxis()->SetLabelFont(42);
   PerfectJesL7A1004->GetYaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1004->GetYaxis()->SetLabelSize(0.06);
   PerfectJesL7A1004->GetYaxis()->SetTitleSize(0.07);
   PerfectJesL7A1004->GetYaxis()->SetTitleOffset(1.1);
   PerfectJesL7A1004->GetYaxis()->SetTitleFont(42);
   gre2->GetListOfFunctions()->Add(PerfectJesL7A1004);
   multigraph->Add(gre2,"");
   multigraph->Draw("APX");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.07);
   multigraph->GetXaxis()->SetTickLength(0.04285714);
   multigraph->GetXaxis()->SetTitleOffset(10000);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Mean_{90}(E_{j}) [GeV]  ");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02142857);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.1);
   multigraph->GetYaxis()->SetTickLength(0.02142857);
   multigraph->GetYaxis()->SetTitleOffset(0.85);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TF1 *XY1005 = new TF1("XY","x",0,600);
   XY1005->SetFillColor(10);
   XY1005->SetFillStyle(0);
   XY1005->SetMarkerStyle(20);
   XY1005->SetMarkerSize(0.7);

   ci = TColor::GetColor("#333333");
   XY1005->SetLineColor(ci);
   XY1005->SetLineWidth(2);
   XY1005->SetLineStyle(7);
   XY1005->GetXaxis()->SetNdivisions(506);
   XY1005->GetXaxis()->SetLabelFont(42);
   XY1005->GetXaxis()->SetLabelOffset(0.015);
   XY1005->GetXaxis()->SetLabelSize(0.06);
   XY1005->GetXaxis()->SetTitleSize(0.07);
   XY1005->GetXaxis()->SetTitleFont(42);
   XY1005->GetYaxis()->SetNdivisions(506);
   XY1005->GetYaxis()->SetLabelFont(42);
   XY1005->GetYaxis()->SetLabelOffset(0.015);
   XY1005->GetYaxis()->SetLabelSize(0.06);
   XY1005->GetYaxis()->SetTitleSize(0.07);
   XY1005->GetYaxis()->SetTitleOffset(1.1);
   XY1005->GetYaxis()->SetTitleFont(42);
   XY1005->Draw("same");
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1005[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1005[5] = {
   19.55869,
   45.07405,
   99.50565,
   173.7816,
   248.3218};
   Double_t Graph_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1005[5] = {
   0.7769609,
   1.219451,
   2.240213,
   3.854026,
   5.759164};
   gre2 = new TGraphErrors(5,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre2->SetName("Graph");
   gre2->SetTitle("Jet energy scale, cos(#theta) < 0.7;Jet energy [GeV];Reconstructed jet energy [GeV]");

   ci = TColor::GetColor("#ff0000");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(24);
   gre2->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","Jet energy scale, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10011005->SetMinimum(0);
   Graph_Graph_Graph10011005->SetMaximum(277.6109);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);
   Graph_Graph_Graph10011005->SetLineWidth(2);
   Graph_Graph_Graph10011005->SetMarkerStyle(20);
   Graph_Graph_Graph10011005->SetMarkerSize(0.7);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10011005->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitle("Reconstructed jet energy [GeV]");
   Graph_Graph_Graph10011005->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph10011005);
   
   
   TF1 *PerfectJesL7A1006 = new TF1("PerfectJesL7A","x",0,510);
   PerfectJesL7A1006->SetFillColor(19);
   PerfectJesL7A1006->SetFillStyle(0);
   PerfectJesL7A1006->SetLineColor(2);
   PerfectJesL7A1006->SetLineWidth(2);
   PerfectJesL7A1006->GetXaxis()->SetNdivisions(506);
   PerfectJesL7A1006->GetXaxis()->SetLabelFont(42);
   PerfectJesL7A1006->GetXaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1006->GetXaxis()->SetLabelSize(0.06);
   PerfectJesL7A1006->GetXaxis()->SetTitleSize(0.07);
   PerfectJesL7A1006->GetXaxis()->SetTitleFont(42);
   PerfectJesL7A1006->GetYaxis()->SetNdivisions(506);
   PerfectJesL7A1006->GetYaxis()->SetLabelFont(42);
   PerfectJesL7A1006->GetYaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1006->GetYaxis()->SetLabelSize(0.06);
   PerfectJesL7A1006->GetYaxis()->SetTitleSize(0.07);
   PerfectJesL7A1006->GetYaxis()->SetTitleOffset(1.1);
   PerfectJesL7A1006->GetYaxis()->SetTitleFont(42);
   gre2->GetListOfFunctions()->Add(PerfectJesL7A1006);
   multigraph->Add(gre2,"");
   
   Double_t Graph_fx1007[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1007[5] = {
   19.58089,
   45.17291,
   99.71094,
   174.4173,
   248.7633};
   Double_t Graph_fex1007[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1007[5] = {
   0.7697989,
   1.167858,
   2.075245,
   3.564418,
   5.212665};
   gre2 = new TGraphErrors(5,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre2->SetName("Graph");
   gre2->SetTitle("Jet energy scale, cos(#theta) < 0.7;Jet energy [GeV];Reconstructed jet energy [GeV]");

   ci = TColor::GetColor("#0000ff");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(20);
   gre2->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph10031007 = new TH1F("Graph_Graph_Graph10031007","Jet energy scale, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10031007->SetMinimum(0);
   Graph_Graph_Graph10031007->SetMaximum(277.4925);
   Graph_Graph_Graph10031007->SetDirectory(0);
   Graph_Graph_Graph10031007->SetStats(0);
   Graph_Graph_Graph10031007->SetLineWidth(2);
   Graph_Graph_Graph10031007->SetMarkerStyle(20);
   Graph_Graph_Graph10031007->SetMarkerSize(0.7);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10031007->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10031007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10031007->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitle("Reconstructed jet energy [GeV]");
   Graph_Graph_Graph10031007->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10031007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10031007->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10031007->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph10031007);
   
   
   TF1 *PerfectJesL7A1008 = new TF1("PerfectJesL7A","x",0,510);
   PerfectJesL7A1008->SetFillColor(19);
   PerfectJesL7A1008->SetFillStyle(0);
   PerfectJesL7A1008->SetLineColor(2);
   PerfectJesL7A1008->SetLineWidth(2);
   PerfectJesL7A1008->GetXaxis()->SetNdivisions(506);
   PerfectJesL7A1008->GetXaxis()->SetLabelFont(42);
   PerfectJesL7A1008->GetXaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1008->GetXaxis()->SetLabelSize(0.06);
   PerfectJesL7A1008->GetXaxis()->SetTitleSize(0.07);
   PerfectJesL7A1008->GetXaxis()->SetTitleFont(42);
   PerfectJesL7A1008->GetYaxis()->SetNdivisions(506);
   PerfectJesL7A1008->GetYaxis()->SetLabelFont(42);
   PerfectJesL7A1008->GetYaxis()->SetLabelOffset(0.015);
   PerfectJesL7A1008->GetYaxis()->SetLabelSize(0.06);
   PerfectJesL7A1008->GetYaxis()->SetTitleSize(0.07);
   PerfectJesL7A1008->GetYaxis()->SetTitleOffset(1.1);
   PerfectJesL7A1008->GetYaxis()->SetTitleFont(42);
   gre2->GetListOfFunctions()->Add(PerfectJesL7A1008);
   multigraph->Add(gre2,"");
   multigraph->Draw("E");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.07);
   multigraph->GetXaxis()->SetTickLength(0.04285714);
   multigraph->GetXaxis()->SetTitleOffset(10000);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Mean_{90}(E_{j}) [GeV]  ");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02142857);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.1);
   multigraph->GetYaxis()->SetTickLength(0.02142857);
   multigraph->GetYaxis()->SetTitleOffset(0.85);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TPaveText *pt = new TPaveText(0.25,0.8,0.25,0.8,"tbNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(4);
   pt->SetTextAlign(13);
   pt->SetTextColor(1);
   pt->SetTextFont(42);
   pt->SetTextSize(0.08333334);
   TText *AText = pt->AddText("ILD");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5,0.1,0.9,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry(gre2,"IDR-L","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.32);
   entry->SetTextFont(62);
   entry=leg->AddEntry(gre,"IDR-S","epl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(62);
   leg->Draw();
   pad1->Modified();
   JESs->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-65.71333,-0.323038,292.7033,0.08202532);
   pad2->SetFillColor(10);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.2);
   pad2->SetRightMargin(0.08);
   pad2->SetTopMargin(0.005);
   pad2->SetBottomMargin(0.6);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1009[5] = {
   20,
   45.5,
   100,
   180,
   250};
   Double_t Graph_fy1009[5] = {
   0.02206535,
   0.009361519,
   0.004943543,
   0.03454675,
   0.006712708};
   Double_t Graph_fex1009[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1009[5] = {
   0.03884805,
   0.02680112,
   0.02240213,
   0.02141126,
   0.02303666};
   gre2 = new TGraphErrors(5,Graph_fx1009,Graph_fy1009,Graph_fex1009,Graph_fey1009);
   gre2->SetName("Graph");
   gre2->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(24);
   gre2->SetMarkerSize(1.4);
   
   double ratioMinY=-0.08 ;
   double ratioMaxY= 0.08 ;

   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,0,273);
   Graph_Graph1009->SetMinimum(ratioMinY);
   Graph_Graph1009->SetMaximum(ratioMaxY);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);
   Graph_Graph1009->SetLineWidth(2);
   Graph_Graph1009->SetMarkerStyle(20);
   Graph_Graph1009->SetMarkerSize(0.7);
   Graph_Graph1009->GetXaxis()->SetNdivisions(506);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetNdivisions(506);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph1009);
   gre2->SetMinimum(ratioMinY);
   gre2->SetMaximum(ratioMaxY);
   
   multigraph->Add(gre2,"");
   multigraph->SetMinimum(ratioMinY);
   multigraph->SetMaximum(ratioMaxY);

   
   Double_t Graph_fx1010[5] = {
   20,
   45.5,
   100,
   180,
   250};
   Double_t Graph_fy1010[5] = {
   0.02095556,
   0.007188734,
   0.002890625,
   0.03101476,
   0.004946716};
   Double_t Graph_fex1010[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1010[5] = {
   0.03848995,
   0.0256672,
   0.02075245,
   0.01980232,
   0.02085066};
   gre2 = new TGraphErrors(5,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre2->SetName("Graph");
   gre2->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(20);
   gre2->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,0,273);
   Graph_Graph1010->SetMinimum(ratioMinY);
   Graph_Graph1010->SetMaximum(ratioMaxY);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);
   Graph_Graph1010->SetLineWidth(2);
   Graph_Graph1010->SetMarkerStyle(20);
   Graph_Graph1010->SetMarkerSize(0.7);
   Graph_Graph1010->GetXaxis()->SetNdivisions(506);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetNdivisions(506);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph1010);
   
   multigraph->Add(gre2,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("E_{jet} [GeV]");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.05);
   multigraph->GetXaxis()->SetLabelSize(0.16);
   multigraph->GetXaxis()->SetTitleSize(0.21);
   multigraph->GetXaxis()->SetTickLength(0.09999999);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetNdivisions(505);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02142857);
   multigraph->GetYaxis()->SetLabelSize(0.16);
   multigraph->GetYaxis()->SetTitleSize(0.2333333);
   multigraph->GetYaxis()->SetTickLength(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0.33);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TF1 *zero1009 = new TF1("zero","0",0,275);
   zero1009->SetFillColor(10);
   zero1009->SetFillStyle(0);
   zero1009->SetMarkerStyle(20);
   zero1009->SetMarkerSize(0.7);

   ci = TColor::GetColor("#333333");
   zero1009->SetLineColor(ci);
   zero1009->SetLineWidth(2);
   zero1009->SetLineStyle(7);
   zero1009->GetXaxis()->SetNdivisions(506);
   zero1009->GetXaxis()->SetLabelFont(42);
   zero1009->GetXaxis()->SetLabelOffset(0.015);
   zero1009->GetXaxis()->SetLabelSize(0.06);
   zero1009->GetXaxis()->SetTitleSize(0.07);
   zero1009->GetXaxis()->SetTitleFont(42);
   zero1009->GetYaxis()->SetNdivisions(506);
   zero1009->GetYaxis()->SetLabelFont(42);
   zero1009->GetYaxis()->SetLabelOffset(0.015);
   zero1009->GetYaxis()->SetLabelSize(0.06);
   zero1009->GetYaxis()->SetTitleSize(0.07);
   zero1009->GetYaxis()->SetTitleOffset(1.1);
   zero1009->GetYaxis()->SetTitleFont(42);
   zero1009->Draw("same");
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1011[5] = {
   20,
   45.5,
   100,
   180,
   250};
   Double_t Graph_fy1011[5] = {
   0.02206535,
   0.009361519,
   0.004943543,
   0.03454675,
   0.006712708};
   Double_t Graph_fex1011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1011[5] = {
   0.03884805,
   0.02680112,
   0.02240213,
   0.02141126,
   0.02303666};
   gre2 = new TGraphErrors(5,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre2->SetName("Graph");
   gre2->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(24);
   gre2->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10091011 = new TH1F("Graph_Graph_Graph10091011","Graph",100,0,273);
   Graph_Graph_Graph10091011->SetMinimum(ratioMinY);
   Graph_Graph_Graph10091011->SetMaximum(ratioMaxY);
   Graph_Graph_Graph10091011->SetDirectory(0);
   Graph_Graph_Graph10091011->SetStats(0);
   Graph_Graph_Graph10091011->SetLineWidth(2);
   Graph_Graph_Graph10091011->SetMarkerStyle(20);
   Graph_Graph_Graph10091011->SetMarkerSize(0.7);
   Graph_Graph_Graph10091011->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10091011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091011->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10091011->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10091011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10091011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091011->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10091011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091011->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10091011->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10091011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091011->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10091011->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10091011->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10091011->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10091011->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph10091011);
   
   multigraph->Add(gre2,"");
   
   Double_t Graph_fx1012[5] = {
   20,
   45.5,
   100,
   180,
   250};
   Double_t Graph_fy1012[5] = {
   0.02095556,
   0.007188734,
   0.002890625,
   0.03101476,
   0.004946716};
   Double_t Graph_fex1012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1012[5] = {
   0.03848995,
   0.0256672,
   0.02075245,
   0.01980232,
   0.02085066};
   gre2 = new TGraphErrors(5,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre2->SetName("Graph");
   gre2->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(20);
   gre2->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph10101012 = new TH1F("Graph_Graph_Graph10101012","Graph",100,0,273);
   Graph_Graph_Graph10101012->SetMinimum(ratioMinY);
   Graph_Graph_Graph10101012->SetMaximum(ratioMaxY);
   Graph_Graph_Graph10101012->SetDirectory(0);
   Graph_Graph_Graph10101012->SetStats(0);
   Graph_Graph_Graph10101012->SetLineWidth(2);
   Graph_Graph_Graph10101012->SetMarkerStyle(20);
   Graph_Graph_Graph10101012->SetMarkerSize(0.7);
   Graph_Graph_Graph10101012->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10101012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101012->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10101012->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10101012->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10101012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101012->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10101012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101012->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10101012->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10101012->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10101012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10101012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101012->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10101012->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10101012->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10101012->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10101012->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph10101012);
   
   multigraph->Add(gre2,"");
   multigraph->Draw("E");
   multigraph->GetXaxis()->SetTitle("E_{jet} [GeV]");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.05);
   multigraph->GetXaxis()->SetLabelSize(0.16);
   multigraph->GetXaxis()->SetTitleSize(0.21);
   multigraph->GetXaxis()->SetTickLength(0.09999999);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetNdivisions(505);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02142857);
   multigraph->GetYaxis()->SetLabelSize(0.16);
   multigraph->GetYaxis()->SetTitleSize(0.2333333);
   multigraph->GetYaxis()->SetTickLength(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0.33);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1013[5] = {
   20,
   45.5,
   100,
   180,
   250};
   Double_t Graph_fy1013[5] = {
   0.02206535,
   0.009361519,
   0.004943543,
   0.03454675,
   0.006712708};
   Double_t Graph_fex1013[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1013[5] = {
   0.03884805,
   0.02680112,
   0.02240213,
   0.02141126,
   0.02303666};
   gre2 = new TGraphErrors(5,Graph_fx1013,Graph_fy1013,Graph_fex1013,Graph_fey1013);
   gre2->SetName("Graph");
   gre2->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(24);
   gre2->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph_Graph100910111013 = new TH1F("Graph_Graph_Graph_Graph100910111013","Graph",100,0,273);
   Graph_Graph_Graph_Graph100910111013->SetMinimum(ratioMinY);
   Graph_Graph_Graph_Graph100910111013->SetMaximum(ratioMaxY);
   Graph_Graph_Graph_Graph100910111013->SetDirectory(0);
   Graph_Graph_Graph_Graph100910111013->SetStats(0);
   Graph_Graph_Graph_Graph100910111013->SetLineWidth(2);
   Graph_Graph_Graph_Graph100910111013->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100910111013->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100910111013->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100910111013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100910111013->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100910111013->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100910111013->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100910111013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100910111013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100910111013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100910111013->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100910111013->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100910111013->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100910111013->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100910111013->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph_Graph100910111013);
   
   multigraph->Add(gre2,"");
   
   Double_t Graph_fx1014[5] = {
   20,
   45.5,
   100,
   180,
   250};
   Double_t Graph_fy1014[5] = {
   0.02095556,
   0.007188734,
   0.002890625,
   0.03101476,
   0.004946716};
   Double_t Graph_fex1014[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1014[5] = {
   0.03848995,
   0.0256672,
   0.02075245,
   0.01980232,
   0.02085066};
   gre2 = new TGraphErrors(5,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre2->SetName("Graph");
   gre2->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre2->SetFillColor(ci);
   gre2->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre2->SetLineColor(ci);
   gre2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre2->SetMarkerColor(ci);
   gre2->SetMarkerStyle(20);
   gre2->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph_Graph101010121014 = new TH1F("Graph_Graph_Graph_Graph101010121014","Graph",100,0,273);
   Graph_Graph_Graph_Graph101010121014->SetMinimum(ratioMinY);
   Graph_Graph_Graph_Graph101010121014->SetMaximum(ratioMaxY);
   Graph_Graph_Graph_Graph101010121014->SetDirectory(0);
   Graph_Graph_Graph_Graph101010121014->SetStats(0);
   Graph_Graph_Graph_Graph101010121014->SetLineWidth(2);
   Graph_Graph_Graph_Graph101010121014->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph101010121014->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph101010121014->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph101010121014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010121014->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph101010121014->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph101010121014->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph101010121014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph101010121014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101010121014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010121014->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph101010121014->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph101010121014->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph101010121014->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph101010121014->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph_Graph101010121014);
   
   multigraph->Add(gre2,"");
   multigraph->Draw("PX");
   multigraph->GetXaxis()->SetTitle("E_{jet} [GeV]");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.05);
   multigraph->GetXaxis()->SetLabelSize(0.16);
   multigraph->GetXaxis()->SetTitleSize(0.21);
   multigraph->GetXaxis()->SetTickLength(0.09999999);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetNdivisions(505);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.02142857);
   multigraph->GetYaxis()->SetLabelSize(0.16);
   multigraph->GetYaxis()->SetTitleSize(0.2333333);
   multigraph->GetYaxis()->SetTickLength(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0.33);
   multigraph->GetYaxis()->SetTitleFont(42);

   pad2->Modified();
   JESs->cd();
   JESs->Modified();
   JESs->cd();
   JESs->SetSelected(JESs);

   JESs->Print("JESs_uds_l5_vs_s5.pdf") ;
}
