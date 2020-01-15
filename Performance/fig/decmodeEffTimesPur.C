void decmodeEffTimesPur()
{
//=========Macro generated from canvas: cc/cc
//=========  (Fri Apr 26 13:13:43 2019) by ROOT version6.08/06
   TCanvas *cc = new TCanvas("cc", "cc",1,1,600,600);
   gStyle->SetOptStat(0);
   cc->Range(-0.68,0.04189189,3.32,0.9202703);
   cc->SetFillColor(0);
   cc->SetBorderMode(0);
   cc->SetBorderSize(2);
   cc->SetTickx(1);
   cc->SetTicky(1);
   cc->SetLeftMargin(0.17);
   cc->SetRightMargin(0.08);
   cc->SetTopMargin(0.08);
   cc->SetBottomMargin(0.18);
   cc->SetFrameLineWidth(2);
   cc->SetFrameBorderMode(0);
   cc->SetFrameLineWidth(2);
   cc->SetFrameBorderMode(0);
   
   TH2F *effPur__18 = new TH2F("effPur__18","",3,0,3,10,0.2,0.85);
   effPur__18->SetStats(0);
   effPur__18->SetLineWidth(2);
   effPur__18->SetMarkerStyle(20);
   effPur__18->SetMarkerSize(0.7);
   effPur__18->GetXaxis()->SetBinLabel(1,"#pi");
   effPur__18->GetXaxis()->SetBinLabel(2,"#rho");
   effPur__18->GetXaxis()->SetBinLabel(3,"a_{1}");
   effPur__18->GetXaxis()->SetNdivisions(506);
   effPur__18->GetXaxis()->SetLabelFont(42);
   effPur__18->GetXaxis()->SetLabelOffset(0.015);
   effPur__18->GetXaxis()->SetLabelSize(0.13);
   effPur__18->GetXaxis()->SetTitleSize(0.07);
   effPur__18->GetXaxis()->SetTitleFont(42);
   effPur__18->GetYaxis()->SetTitle("efficiency #times purity");
   effPur__18->GetYaxis()->SetNdivisions(506);
   effPur__18->GetYaxis()->SetLabelFont(42);
   effPur__18->GetYaxis()->SetLabelOffset(0.015);
   effPur__18->GetYaxis()->SetLabelSize(0.06);
   effPur__18->GetYaxis()->SetTitleSize(0.07);
   effPur__18->GetYaxis()->SetTitleOffset(1.1);
   effPur__18->GetYaxis()->SetTitleFont(42);
   effPur__18->GetZaxis()->SetLabelFont(42);
   effPur__18->GetZaxis()->SetLabelOffset(0.015);
   effPur__18->GetZaxis()->SetLabelSize(0.06);
   effPur__18->GetZaxis()->SetTitleSize(0.07);
   effPur__18->GetZaxis()->SetTitleOffset(1.1);
   effPur__18->GetZaxis()->SetTitleFont(42);
   effPur__18->Draw("");
   
   Double_t Graph0_fx1003[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph0_fy1003[3] = {
   0.7393768,
   0.6662028,
   0.3566988};
   Double_t Graph0_fex1003[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1003[3] = {
   0.005360919,
   0.004053617,
   0.005967508};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.3,2.7);
   Graph_Graph1003->SetMinimum(0.3113307);
   Graph_Graph1003->SetMaximum(0.7841383);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);
   Graph_Graph1003->SetLineWidth(2);
   Graph_Graph1003->SetMarkerStyle(20);
   Graph_Graph1003->SetMarkerSize(0.7);
   Graph_Graph1003->GetXaxis()->SetNdivisions(506);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
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
   
   gre->Draw(";pl");
   
   Double_t Graph1_fx1004[3] = {
   0.5,
   1.5,
   2.5};
   Double_t Graph1_fy1004[3] = {
   0.7087856,
   0.6352136,
   0.304678};
   Double_t Graph1_fex1004[3] = {
   0,
   0,
   0};
   Double_t Graph1_fey1004[3] = {
   0.005475327,
   0.004143754,
   0.005711};
   gre = new TGraphErrors(3,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.3,2.7);
   Graph_Graph1004->SetMinimum(0.2574376);
   Graph_Graph1004->SetMaximum(0.7557903);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);
   Graph_Graph1004->SetLineWidth(2);
   Graph_Graph1004->SetMarkerStyle(20);
   Graph_Graph1004->SetMarkerSize(0.7);
   Graph_Graph1004->GetXaxis()->SetNdivisions(506);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
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
   
   gre->Draw(";pl");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","IDR-L","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","IDR-S","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TText *text = new TText(0.25,0.45,"ILD");
   text->SetNDC();
   text->SetTextSize(0.075);
   text->Draw();
   TLatex *   tex = new TLatex(0.22,0.35,"e^{+}e^{#minus} #rightarrow #tau^{+}#tau^{#minus}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.22,0.25,"#sqrt{s} = 500 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
   cc->Modified();
   cc->cd();
   cc->SetSelected(cc);
}
