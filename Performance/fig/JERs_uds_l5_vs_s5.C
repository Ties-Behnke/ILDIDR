void JERs_uds_l5_vs_s5()
{
//=========Macro generated from canvas: JERs/Jet energy resolution
//=========  (Tue Jul  2 16:55:09 2019) by ROOT version6.08/06
   TCanvas *JERs = new TCanvas("JERs", "Jet energy resolution",0,0,650,650);
   gStyle->SetOptStat(0);
   JERs->Range(-65.71333,1.648649,292.7033,6.378378);
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
   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
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
   5.617904,
   3.826068,
   3.183879,
   3.13636,
   3.279892};
   Double_t Graph_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1002[5] = {
   0.01852722,
   0.0127147,
   0.01056904,
   0.01047679,
   0.01099595};
   gre = new TGraphErrors(5,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
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
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph1002->SetMinimum(2.874828);
   Graph_Graph1002->SetMaximum(5.887486);
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
   
   Double_t Graph_fx1003[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1003[5] = {
   5.559809,
   3.656173,
   2.943347,
   2.890107,
   2.963387};
   Double_t Graph_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[5] = {
   0.01833543,
   0.01213137,
   0.009790456,
   0.009660078,
   0.009932126};
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
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph10011003 = new TH1F("Graph_Graph_Graph10011003","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10011003->SetMinimum(2.610678);
   Graph_Graph_Graph10011003->SetMaximum(5.847914);
   Graph_Graph_Graph10011003->SetDirectory(0);
   Graph_Graph_Graph10011003->SetStats(0);
   Graph_Graph_Graph10011003->SetLineWidth(2);
   Graph_Graph_Graph10011003->SetMarkerStyle(20);
   Graph_Graph_Graph10011003->SetMarkerSize(0.7);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10011003->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10011003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10011003->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011003->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10011003->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10011003->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10011003->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011003);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1004[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1004[5] = {
   5.617904,
   3.826068,
   3.183879,
   3.13636,
   3.279892};
   Double_t Graph_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1004[5] = {
   0.01852722,
   0.0127147,
   0.01056904,
   0.01047679,
   0.01099595};
   gre = new TGraphErrors(5,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
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
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph10021004 = new TH1F("Graph_Graph_Graph10021004","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph10021004->SetMinimum(2.874828);
   Graph_Graph_Graph10021004->SetMaximum(5.887486);
   Graph_Graph_Graph10021004->SetDirectory(0);
   Graph_Graph_Graph10021004->SetStats(0);
   Graph_Graph_Graph10021004->SetLineWidth(2);
   Graph_Graph_Graph10021004->SetMarkerStyle(20);
   Graph_Graph_Graph10021004->SetMarkerSize(0.7);
   Graph_Graph_Graph10021004->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph10021004->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph10021004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10021004->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10021004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10021004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021004->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph10021004->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph10021004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10021004->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10021004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10021004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021004->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph10021004->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph10021004->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph10021004->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021004);
   
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
   
   Double_t Graph_fx1005[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1005[5] = {
   5.559809,
   3.656173,
   2.943347,
   2.890107,
   2.963387};
   Double_t Graph_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1005[5] = {
   0.01833543,
   0.01213137,
   0.009790456,
   0.009660078,
   0.009932126};
   gre = new TGraphErrors(5,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
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
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.32);
   
   TH1F *Graph_Graph_Graph_Graph100110031005 = new TH1F("Graph_Graph_Graph_Graph100110031005","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100110031005->SetMinimum(2.610678);
   Graph_Graph_Graph_Graph100110031005->SetMaximum(5.847914);
   Graph_Graph_Graph_Graph100110031005->SetDirectory(0);
   Graph_Graph_Graph_Graph100110031005->SetStats(0);
   Graph_Graph_Graph_Graph100110031005->SetLineWidth(2);
   Graph_Graph_Graph_Graph100110031005->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100110031005->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100110031005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110031005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110031005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110031005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100110031005->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100110031005->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100110031005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110031005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100110031005);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph_fy1006[5] = {
   5.617904,
   3.826068,
   3.183879,
   3.13636,
   3.279892};
   Double_t Graph_fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1006[5] = {
   0.01852722,
   0.0127147,
   0.01056904,
   0.01047679,
   0.01099595};
   gre = new TGraphErrors(5,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
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
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_Graph_Graph100210041006 = new TH1F("Graph_Graph_Graph_Graph100210041006","Jet energy resolution, cos(#theta) < 0.7",100,0,273);
   Graph_Graph_Graph_Graph100210041006->SetMinimum(2.874828);
   Graph_Graph_Graph_Graph100210041006->SetMaximum(5.887486);
   Graph_Graph_Graph_Graph100210041006->SetDirectory(0);
   Graph_Graph_Graph_Graph100210041006->SetStats(0);
   Graph_Graph_Graph_Graph100210041006->SetLineWidth(2);
   Graph_Graph_Graph_Graph100210041006->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100210041006->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100210041006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100210041006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100210041006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210041006->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100210041006->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100210041006->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100210041006->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100210041006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100210041006);
   
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
   
   TLegend *leg = new TLegend(0.5,0.4,0.9,0.55,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","ILD-L","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.32);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph","ILD-S","epl");

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
   JERs->Modified();
   JERs->cd();
   JERs->SetSelected(JERs);
}
