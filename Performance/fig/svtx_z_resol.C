void svtx_z_resol()
{
//=========Macro generated from canvas: cz/
//=========  (Tue Apr  2 11:12:06 2019) by ROOT version6.08/06
   TCanvas *cz = new TCanvas("cz", "",415,1103,600,600);
   gStyle->SetOptStat(0);
   cz->Range(-1.346883,-18.75,5.387534,106.25);
   cz->SetFillColor(10);
   cz->SetBorderMode(0);
   cz->SetBorderSize(2);
   cz->SetTickx(1);
   cz->SetTicky(1);
   cz->SetLeftMargin(0.2);
   cz->SetRightMargin(0.05);
   cz->SetTopMargin(0.05);
   cz->SetBottomMargin(0.15);
   cz->SetFrameLineWidth(3);
   cz->SetFrameBorderMode(0);
   cz->SetFrameLineWidth(3);
   cz->SetFrameBorderMode(0);
   
   Double_t gzL_fx1003[10] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75};
   Double_t gzL_fy1003[10] = {
   30.80535,
   41.97321,
   47.42791,
   51.15644,
   51.63453,
   55.61261,
   55.77416,
   55.18948,
   56.05558,
   56.37307};
   Double_t gzL_fex1003[10] = {
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376};
   Double_t gzL_fey1003[10] = {
   0.4118887,
   0.301365,
   0.3758086,
   0.4600634,
   0.5196231,
   0.6177007,
   0.6771921,
   0.732084,
   0.817116,
   0.9380289};
   TGraphErrors *gre = new TGraphErrors(10,gzL_fx1003,gzL_fy1003,gzL_fex1003,gzL_fey1003);
   gre->SetName("gzL");
   gre->SetTitle(";Distance from IP [mm]; Longitudinal resolution [#mum]");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_gzL1003 = new TH1F("Graph_gzL1003","",100,0,5.373205);
   Graph_gzL1003->SetMinimum(0);
   Graph_gzL1003->SetMaximum(100);
   Graph_gzL1003->SetDirectory(0);
   Graph_gzL1003->SetStats(0);
   Graph_gzL1003->SetLineWidth(3);
   Graph_gzL1003->SetMarkerStyle(20);
   Graph_gzL1003->SetMarkerSize(1.3);
   Graph_gzL1003->GetXaxis()->SetTitle("Distance from IP [mm]");
   Graph_gzL1003->GetXaxis()->SetRange(1,94);
   Graph_gzL1003->GetXaxis()->SetNdivisions(506);
   Graph_gzL1003->GetXaxis()->SetLabelFont(42);
   Graph_gzL1003->GetXaxis()->SetLabelOffset(0.015);
   Graph_gzL1003->GetXaxis()->SetLabelSize(0.06);
   Graph_gzL1003->GetXaxis()->SetTitleSize(0.05);
   Graph_gzL1003->GetXaxis()->SetTitleOffset(1.4);
   Graph_gzL1003->GetXaxis()->SetTitleFont(42);
   Graph_gzL1003->GetYaxis()->SetTitle(" Longitudinal resolution [#mum]");
   Graph_gzL1003->GetYaxis()->SetNdivisions(506);
   Graph_gzL1003->GetYaxis()->SetLabelFont(42);
   Graph_gzL1003->GetYaxis()->SetLabelOffset(0.015);
   Graph_gzL1003->GetYaxis()->SetLabelSize(0.06);
   Graph_gzL1003->GetYaxis()->SetTitleSize(0.05);
   Graph_gzL1003->GetYaxis()->SetTitleOffset(1.7);
   Graph_gzL1003->GetYaxis()->SetTitleFont(42);
   Graph_gzL1003->GetZaxis()->SetLabelFont(42);
   Graph_gzL1003->GetZaxis()->SetLabelOffset(0.015);
   Graph_gzL1003->GetZaxis()->SetLabelSize(0.06);
   Graph_gzL1003->GetZaxis()->SetTitleSize(0.07);
   Graph_gzL1003->GetZaxis()->SetTitleOffset(1.1);
   Graph_gzL1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gzL1003);
   
   gre->Draw("ap");
   
   Double_t gzS_fx1004[10] = {
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   2.75,
   3.25,
   3.75,
   4.25,
   4.75};
   Double_t gzS_fy1004[10] = {
   32.1619,
   42.47036,
   47.42408,
   51.24873,
   51.77797,
   54.22899,
   56.18964,
   56.44016,
   54.34152,
   57.08627};
   Double_t gzS_fex1004[10] = {
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376,
   0.1443376};
   Double_t gzS_fey1004[10] = {
   0.4679346,
   0.3066784,
   0.3774153,
   0.4555253,
   0.5208148,
   0.5731688,
   0.7147481,
   0.7653679,
   0.7698697,
   0.9376782};
   gre = new TGraphErrors(10,gzS_fx1004,gzS_fy1004,gzS_fex1004,gzS_fey1004);
   gre->SetName("gzS");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_gzS1004 = new TH1F("Graph_gzS1004","",100,0,5.373205);
   Graph_gzS1004->SetMinimum(29.06097);
   Graph_gzS1004->SetMaximum(60.65695);
   Graph_gzS1004->SetDirectory(0);
   Graph_gzS1004->SetStats(0);
   Graph_gzS1004->SetLineWidth(3);
   Graph_gzS1004->SetMarkerStyle(20);
   Graph_gzS1004->SetMarkerSize(1.3);
   Graph_gzS1004->GetXaxis()->SetNdivisions(506);
   Graph_gzS1004->GetXaxis()->SetLabelFont(42);
   Graph_gzS1004->GetXaxis()->SetLabelOffset(0.015);
   Graph_gzS1004->GetXaxis()->SetLabelSize(0.06);
   Graph_gzS1004->GetXaxis()->SetTitleSize(0.07);
   Graph_gzS1004->GetXaxis()->SetTitleFont(42);
   Graph_gzS1004->GetYaxis()->SetNdivisions(506);
   Graph_gzS1004->GetYaxis()->SetLabelFont(42);
   Graph_gzS1004->GetYaxis()->SetLabelOffset(0.015);
   Graph_gzS1004->GetYaxis()->SetLabelSize(0.06);
   Graph_gzS1004->GetYaxis()->SetTitleSize(0.07);
   Graph_gzS1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_gzS1004->GetYaxis()->SetTitleFont(42);
   Graph_gzS1004->GetZaxis()->SetLabelFont(42);
   Graph_gzS1004->GetZaxis()->SetLabelOffset(0.015);
   Graph_gzS1004->GetZaxis()->SetLabelSize(0.06);
   Graph_gzS1004->GetZaxis()->SetTitleSize(0.07);
   Graph_gzS1004->GetZaxis()->SetTitleOffset(1.1);
   Graph_gzS1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gzS1004);
   
   gre->Draw("p ");
   TLatex *   tex = new TLatex(0.5,0.8,"#scale[1.5]{#font[62]{ILD}} #font[42]{preliminary}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6,0.65,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(3);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("grL","IDR-L","pl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(62);
   entry=leg->AddEntry("grS","IDR-S","pl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(62);
   leg->Draw();
   cz->Modified();
   cz->cd();
   cz->SetSelected(cz);
}
