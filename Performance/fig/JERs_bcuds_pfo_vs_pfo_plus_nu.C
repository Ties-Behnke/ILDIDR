void JERs_bcuds_pfo_vs_pfo_plus_nu()
{
//=========Macro generated from canvas: JERs/Jet energy resolution
//=========  (Tue Jul  2 18:06:00 2019) by ROOT version6.08/06
   TCanvas *JERs = new TCanvas("JERs", "Jet energy resolution",0,0,650,650);
   gStyle->SetOptStat(0);
   JERs->Range(-65.71333,-0.4324325,292.7033,13.08108);
   JERs->SetFillColor(10);
   JERs->SetBorderMode(0);
   JERs->SetBorderSize(2);
   JERs->SetTickx(1);
   JERs->SetTicky(1);
   JERs->SetLeftMargin(0.2);
   JERs->SetRightMargin(0.08);
   JERs->SetTopMargin(0.08);
   JERs->SetBottomMargin(0.18);
   JERs->SetFrameLineWidth(2);
   JERs->SetFrameBorderMode(0);
   JERs->SetFrameLineWidth(2);
   JERs->SetFrameBorderMode(0);
   
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
   5.559809,
   3.656173,
   2.943347,
   2.890107,
   2.963387};
   Double_t Graph_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1001[5] = {
   0.01833543,
   0.01213137,
   0.009790456,
   0.009660078,
   0.009932126};
   TGraphErrors *gre = new TGraphErrors(5,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1001->SetMinimum(2.610678);
   Graph_Graph1001->SetMaximum(5.847914);
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
   Graph_Graph1001->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
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
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1002[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1002[5] = {
   5.441345,
   3.637063,
   2.922546,
   2.878211,
   2.950544};
   Double_t Graph_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1002[5] = {
   0.01794475,
   0.01206796,
   0.009721264,
   0.009620315,
   0.00988908};
   gre = new TGraphErrors(5,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#00ff00");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1002->SetMinimum(2.609521);
   Graph_Graph1002->SetMaximum(5.718359);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);
   Graph_Graph1002->SetLineWidth(2);
   Graph_Graph1002->SetMarkerStyle(20);
   Graph_Graph1002->SetMarkerSize(0.7);
   Graph_Graph1002->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph1002->GetXaxis()->SetNdivisions(506);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph1002->GetYaxis()->SetNdivisions(506);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1003[5] = {
   7.480522,
   5.543536,
   4.668113,
   4.470563,
   4.470188};
   Double_t Graph_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[5] = {
   0.04284247,
   0.03169029,
   0.02684109,
   0.02570521,
   0.02565095};
   gre = new TGraphErrors(5,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1003->SetMinimum(4.136654);
   Graph_Graph1003->SetMaximum(7.831247);
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
   Graph_Graph1003->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
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
   gre->SetHistogram(Graph_Graph1003);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1004[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1004[5] = {
   5.600482,
   3.661761,
   2.918192,
   2.842357,
   2.902376};
   Double_t Graph_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1004[5] = {
   0.0320751,
   0.0209329,
   0.01677926,
   0.01634348,
   0.01665449};
   gre = new TGraphErrors(5,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1004->SetMinimum(2.545359);
   Graph_Graph1004->SetMaximum(5.913211);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);
   Graph_Graph1004->SetLineWidth(2);
   Graph_Graph1004->SetMarkerStyle(20);
   Graph_Graph1004->SetMarkerSize(0.7);
   Graph_Graph1004->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph1004->GetXaxis()->SetNdivisions(506);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph1004->GetYaxis()->SetNdivisions(506);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1005[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1005[5] = {
   10.54246,
   8.65416,
   7.672111,
   7.237575,
   7.128512};
   Double_t Graph_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1005[5] = {
   0.06048703,
   0.04952436,
   0.04408313,
   0.04138122,
   0.04082377};
   gre = new TGraphErrors(5,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1005->SetMinimum(6.736163);
   Graph_Graph1005->SetMaximum(10.95447);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);
   Graph_Graph1005->SetLineWidth(2);
   Graph_Graph1005->SetMarkerStyle(20);
   Graph_Graph1005->SetMarkerSize(0.7);
   Graph_Graph1005->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph1005->GetXaxis()->SetNdivisions(506);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph1005->GetYaxis()->SetNdivisions(506);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1006[5] = {
   5.342428,
   3.422094,
   2.645721,
   2.543251,
   2.606341};
   Double_t Graph_fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1006[5] = {
   0.03065202,
   0.0195833,
   0.01520203,
   0.01454117,
   0.01492631};
   gre = new TGraphErrors(5,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1006->SetMinimum(2.244273);
   Graph_Graph1006->SetMaximum(5.657517);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);
   Graph_Graph1006->SetLineWidth(2);
   Graph_Graph1006->SetMarkerStyle(20);
   Graph_Graph1006->SetMarkerSize(0.7);
   Graph_Graph1006->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph1006->GetXaxis()->SetNdivisions(506);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph1006->GetYaxis()->SetNdivisions(506);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("E_{jet} [GeV]");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("RMS_{90}(E_{j})/Mean_{90}(E_{j}) [%]");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1007[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1007[5] = {
   5.559809,
   3.656173,
   2.943347,
   2.890107,
   2.963387};
   Double_t Graph_fex1007[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1007[5] = {
   0.01833543,
   0.01213137,
   0.009790456,
   0.009660078,
   0.009932126};
   gre = new TGraphErrors(5,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#00ff00");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph10011007 = new TH1F("Graph_Graph_Graph10011007","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10011007->SetMinimum(2.610678);
   Graph_Graph_Graph10011007->SetMaximum(5.847914);
   Graph_Graph_Graph10011007->SetDirectory(0);
   Graph_Graph_Graph10011007->SetStats(0);
   Graph_Graph_Graph10011007->SetLineWidth(2);
   Graph_Graph_Graph10011007->SetMarkerStyle(20);
   Graph_Graph_Graph10011007->SetMarkerSize(0.7);
   Graph_Graph_Graph10011007->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10011007->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10011007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011007->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011007->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011007->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011007->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10011007->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10011007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011007->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011007->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011007->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011007->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011007->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011007->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011007->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011007);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1008[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1008[5] = {
   5.441345,
   3.637063,
   2.922546,
   2.878211,
   2.950544};
   Double_t Graph_fex1008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1008[5] = {
   0.01794475,
   0.01206796,
   0.009721264,
   0.009620315,
   0.00988908};
   gre = new TGraphErrors(5,Graph_fx1008,Graph_fy1008,Graph_fex1008,Graph_fey1008);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#00ff00");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph10021008 = new TH1F("Graph_Graph_Graph10021008","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10021008->SetMinimum(2.609521);
   Graph_Graph_Graph10021008->SetMaximum(5.718359);
   Graph_Graph_Graph10021008->SetDirectory(0);
   Graph_Graph_Graph10021008->SetStats(0);
   Graph_Graph_Graph10021008->SetLineWidth(2);
   Graph_Graph_Graph10021008->SetMarkerStyle(20);
   Graph_Graph_Graph10021008->SetMarkerSize(0.7);
   Graph_Graph_Graph10021008->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10021008->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10021008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021008->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10021008->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10021008->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10021008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021008->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10021008->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10021008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021008->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10021008->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10021008->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10021008->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021008->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10021008->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10021008->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10021008->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021008);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1009[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1009[5] = {
   7.480522,
   5.543536,
   4.668113,
   4.470563,
   4.470188};
   Double_t Graph_fex1009[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1009[5] = {
   0.04284247,
   0.03169029,
   0.02684109,
   0.02570521,
   0.02565095};
   gre = new TGraphErrors(5,Graph_fx1009,Graph_fy1009,Graph_fex1009,Graph_fey1009);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10031009 = new TH1F("Graph_Graph_Graph10031009","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10031009->SetMinimum(4.136654);
   Graph_Graph_Graph10031009->SetMaximum(7.831247);
   Graph_Graph_Graph10031009->SetDirectory(0);
   Graph_Graph_Graph10031009->SetStats(0);
   Graph_Graph_Graph10031009->SetLineWidth(2);
   Graph_Graph_Graph10031009->SetMarkerStyle(20);
   Graph_Graph_Graph10031009->SetMarkerSize(0.7);
   Graph_Graph_Graph10031009->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10031009->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10031009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031009->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10031009->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10031009->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10031009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031009->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10031009->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10031009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031009->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10031009->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10031009->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10031009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031009->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10031009->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10031009->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10031009->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031009);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1010[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1010[5] = {
   5.600482,
   3.661761,
   2.918192,
   2.842357,
   2.902376};
   Double_t Graph_fex1010[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1010[5] = {
   0.0320751,
   0.0209329,
   0.01677926,
   0.01634348,
   0.01665449};
   gre = new TGraphErrors(5,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10041010 = new TH1F("Graph_Graph_Graph10041010","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10041010->SetMinimum(2.545359);
   Graph_Graph_Graph10041010->SetMaximum(5.913211);
   Graph_Graph_Graph10041010->SetDirectory(0);
   Graph_Graph_Graph10041010->SetStats(0);
   Graph_Graph_Graph10041010->SetLineWidth(2);
   Graph_Graph_Graph10041010->SetMarkerStyle(20);
   Graph_Graph_Graph10041010->SetMarkerSize(0.7);
   Graph_Graph_Graph10041010->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10041010->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10041010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10041010->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10041010->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10041010->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10041010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10041010->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10041010->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10041010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10041010->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10041010->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10041010->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10041010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10041010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10041010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10041010->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10041010->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10041010->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10041010->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10041010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10041010);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1011[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1011[5] = {
   10.54246,
   8.65416,
   7.672111,
   7.237575,
   7.128512};
   Double_t Graph_fex1011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1011[5] = {
   0.06048703,
   0.04952436,
   0.04408313,
   0.04138122,
   0.04082377};
   gre = new TGraphErrors(5,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10051011 = new TH1F("Graph_Graph_Graph10051011","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10051011->SetMinimum(6.736163);
   Graph_Graph_Graph10051011->SetMaximum(10.95447);
   Graph_Graph_Graph10051011->SetDirectory(0);
   Graph_Graph_Graph10051011->SetStats(0);
   Graph_Graph_Graph10051011->SetLineWidth(2);
   Graph_Graph_Graph10051011->SetMarkerStyle(20);
   Graph_Graph_Graph10051011->SetMarkerSize(0.7);
   Graph_Graph_Graph10051011->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10051011->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10051011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051011->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10051011->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10051011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10051011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051011->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10051011->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10051011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051011->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10051011->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10051011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10051011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10051011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051011->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10051011->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10051011->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10051011->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10051011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10051011);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1012[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1012[5] = {
   5.342428,
   3.422094,
   2.645721,
   2.543251,
   2.606341};
   Double_t Graph_fex1012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1012[5] = {
   0.03065202,
   0.0195833,
   0.01520203,
   0.01454117,
   0.01492631};
   gre = new TGraphErrors(5,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10061012 = new TH1F("Graph_Graph_Graph10061012","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10061012->SetMinimum(2.244273);
   Graph_Graph_Graph10061012->SetMaximum(5.657517);
   Graph_Graph_Graph10061012->SetDirectory(0);
   Graph_Graph_Graph10061012->SetStats(0);
   Graph_Graph_Graph10061012->SetLineWidth(2);
   Graph_Graph_Graph10061012->SetMarkerStyle(20);
   Graph_Graph_Graph10061012->SetMarkerSize(0.7);
   Graph_Graph_Graph10061012->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10061012->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10061012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10061012->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10061012->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10061012->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10061012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10061012->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10061012->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10061012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10061012->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10061012->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10061012->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10061012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10061012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10061012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10061012->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10061012->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10061012->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10061012->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10061012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10061012);
   
   multigraph->Add(gre,"");
   multigraph->Draw("E");
   multigraph->GetXaxis()->SetTitle("E_{jet} [GeV]");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("RMS_{90}(E_{j})/Mean_{90}(E_{j}) [%]");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1013[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1013[5] = {
   5.559809,
   3.656173,
   2.943347,
   2.890107,
   2.963387};
   Double_t Graph_fex1013[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1013[5] = {
   0.01833543,
   0.01213137,
   0.009790456,
   0.009660078,
   0.009932126};
   gre = new TGraphErrors(5,Graph_fx1013,Graph_fy1013,Graph_fex1013,Graph_fey1013);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#00ff00");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph_Graph100110071013 = new TH1F("Graph_Graph_Graph_Graph100110071013","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100110071013->SetMinimum(2.610678);
   Graph_Graph_Graph_Graph100110071013->SetMaximum(5.847914);
   Graph_Graph_Graph_Graph100110071013->SetDirectory(0);
   Graph_Graph_Graph_Graph100110071013->SetStats(0);
   Graph_Graph_Graph_Graph100110071013->SetLineWidth(2);
   Graph_Graph_Graph_Graph100110071013->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100110071013->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100110071013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110071013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110071013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110071013->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100110071013->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100110071013->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100110071013->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110071013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100110071013);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1014[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1014[5] = {
   5.441345,
   3.637063,
   2.922546,
   2.878211,
   2.950544};
   Double_t Graph_fex1014[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1014[5] = {
   0.01794475,
   0.01206796,
   0.009721264,
   0.009620315,
   0.00988908};
   gre = new TGraphErrors(5,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#00ff00");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph_Graph100210081014 = new TH1F("Graph_Graph_Graph_Graph100210081014","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100210081014->SetMinimum(2.609521);
   Graph_Graph_Graph_Graph100210081014->SetMaximum(5.718359);
   Graph_Graph_Graph_Graph100210081014->SetDirectory(0);
   Graph_Graph_Graph_Graph100210081014->SetStats(0);
   Graph_Graph_Graph_Graph100210081014->SetLineWidth(2);
   Graph_Graph_Graph_Graph100210081014->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100210081014->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100210081014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100210081014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100210081014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210081014->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100210081014->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100210081014->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100210081014->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100210081014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100210081014);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1015[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1015[5] = {
   7.480522,
   5.543536,
   4.668113,
   4.470563,
   4.470188};
   Double_t Graph_fex1015[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1015[5] = {
   0.04284247,
   0.03169029,
   0.02684109,
   0.02570521,
   0.02565095};
   gre = new TGraphErrors(5,Graph_fx1015,Graph_fy1015,Graph_fex1015,Graph_fey1015);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph_Graph100310091015 = new TH1F("Graph_Graph_Graph_Graph100310091015","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100310091015->SetMinimum(4.136654);
   Graph_Graph_Graph_Graph100310091015->SetMaximum(7.831247);
   Graph_Graph_Graph_Graph100310091015->SetDirectory(0);
   Graph_Graph_Graph_Graph100310091015->SetStats(0);
   Graph_Graph_Graph_Graph100310091015->SetLineWidth(2);
   Graph_Graph_Graph_Graph100310091015->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100310091015->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100310091015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100310091015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100310091015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100310091015->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100310091015->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100310091015->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100310091015->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100310091015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100310091015);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1016[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1016[5] = {
   5.600482,
   3.661761,
   2.918192,
   2.842357,
   2.902376};
   Double_t Graph_fex1016[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1016[5] = {
   0.0320751,
   0.0209329,
   0.01677926,
   0.01634348,
   0.01665449};
   gre = new TGraphErrors(5,Graph_fx1016,Graph_fy1016,Graph_fex1016,Graph_fey1016);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph_Graph100410101016 = new TH1F("Graph_Graph_Graph_Graph100410101016","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100410101016->SetMinimum(2.545359);
   Graph_Graph_Graph_Graph100410101016->SetMaximum(5.913211);
   Graph_Graph_Graph_Graph100410101016->SetDirectory(0);
   Graph_Graph_Graph_Graph100410101016->SetStats(0);
   Graph_Graph_Graph_Graph100410101016->SetLineWidth(2);
   Graph_Graph_Graph_Graph100410101016->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100410101016->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100410101016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100410101016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100410101016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100410101016->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100410101016->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100410101016->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100410101016->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100410101016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100410101016);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1017[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1017[5] = {
   10.54246,
   8.65416,
   7.672111,
   7.237575,
   7.128512};
   Double_t Graph_fex1017[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1017[5] = {
   0.06048703,
   0.04952436,
   0.04408313,
   0.04138122,
   0.04082377};
   gre = new TGraphErrors(5,Graph_fx1017,Graph_fy1017,Graph_fex1017,Graph_fey1017);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph_Graph100510111017 = new TH1F("Graph_Graph_Graph_Graph100510111017","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100510111017->SetMinimum(6.736163);
   Graph_Graph_Graph_Graph100510111017->SetMaximum(10.95447);
   Graph_Graph_Graph_Graph100510111017->SetDirectory(0);
   Graph_Graph_Graph_Graph100510111017->SetStats(0);
   Graph_Graph_Graph_Graph100510111017->SetLineWidth(2);
   Graph_Graph_Graph_Graph100510111017->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100510111017->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100510111017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100510111017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100510111017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100510111017->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100510111017->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100510111017->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100510111017->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100510111017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100510111017);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1018[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1018[5] = {
   5.342428,
   3.422094,
   2.645721,
   2.543251,
   2.606341};
   Double_t Graph_fex1018[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1018[5] = {
   0.03065202,
   0.0195833,
   0.01520203,
   0.01454117,
   0.01492631};
   gre = new TGraphErrors(5,Graph_fx1018,Graph_fy1018,Graph_fex1018,Graph_fey1018);
   gre->SetName("Graph");
   gre->SetTitle("Jet energy resolution, cos(#theta) < 0.7;Jet energy [GeV];RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");

   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(3);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph_Graph100610121018 = new TH1F("Graph_Graph_Graph_Graph100610121018","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100610121018->SetMinimum(2.244273);
   Graph_Graph_Graph_Graph100610121018->SetMaximum(5.657517);
   Graph_Graph_Graph_Graph100610121018->SetDirectory(0);
   Graph_Graph_Graph_Graph100610121018->SetStats(0);
   Graph_Graph_Graph_Graph100610121018->SetLineWidth(2);
   Graph_Graph_Graph_Graph100610121018->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100610121018->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100610121018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100610121018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100610121018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100610121018->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100610121018->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100610121018->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100610121018->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100610121018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100610121018);
   
   multigraph->Add(gre,"");
   multigraph->Draw("PX");
   multigraph->GetXaxis()->SetTitle("E_{jet} [GeV]");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("RMS_{90}(E_{j})/Mean_{90}(E_{j}) [%]");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TPaveText *pt = new TPaveText(0.3,0.85,0.3,0.85,"tbNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextAlign(13);
   pt->SetTextColor(15);
   pt->SetTextFont(42);
   pt->SetTextSize(0.0625);
   TText *AText = pt->AddText("ILD Preliminary");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.5,0.6,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","uds (PFO)","epl");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.32);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","uds (PFO + #nu_{MC})","epl");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.32);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","cc (PFO)","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","cc (PFO + #nu_{MC})","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","bb (PFO)","epl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","bb (PFO + #nu_{MC})","epl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(62);
   leg->Draw();
   JERs->Modified();
   JERs->cd();
   JERs->SetSelected(JERs);
}
