void pvtx_z_resol()
{
//=========Macro generated from canvas: cz/
//=========  (Fri Apr 12 18:42:30 2019) by ROOT version6.08/06
   TCanvas *cz = new TCanvas("cz", "",415,1103,600,600);
   gStyle->SetOptStat(0);
   cz->Range(-15.459,-0.9375,85.5691,5.3125);
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
   
   Double_t gzL_fx1003[7] = {
   15,
   25,
   35,
   45,
   55,
   65,
   75};
   Double_t gzL_fy1003[7] = {
   2.275876,
   1.891611,
   1.593508,
   1.410538,
   1.28013,
   1.211311,
   1.118988};
   Double_t gzL_fex1003[7] = {
   2.886751,
   2.886751,
   2.886751,
   2.886751,
   2.886751,
   2.886751,
   2.886751};
   Double_t gzL_fey1003[7] = {
   0.08351184,
   0.02437605,
   0.01197197,
   0.01187031,
   0.02015875,
   0.03628575,
   0.07561965};
   TGraphErrors *gre = new TGraphErrors(7,gzL_fx1003,gzL_fy1003,gzL_fex1003,gzL_fey1003);
   gre->SetName("gzL");
   gre->SetTitle(";Number of associated tracks; Z resolution [#mum]");
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
   
   TH1F *Graph_gzL1003 = new TH1F("Graph_gzL1003","",100,5.535898,84.4641);
   Graph_gzL1003->SetMinimum(0);
   Graph_gzL1003->SetMaximum(5);
   Graph_gzL1003->SetDirectory(0);
   Graph_gzL1003->SetStats(0);
   Graph_gzL1003->SetLineWidth(3);
   Graph_gzL1003->SetMarkerStyle(20);
   Graph_gzL1003->SetMarkerSize(1.3);
   Graph_gzL1003->GetXaxis()->SetTitle("Number of associated tracks");
   Graph_gzL1003->GetXaxis()->SetRange(0,95);
   Graph_gzL1003->GetXaxis()->SetNdivisions(506);
   Graph_gzL1003->GetXaxis()->SetLabelFont(42);
   Graph_gzL1003->GetXaxis()->SetLabelOffset(0.015);
   Graph_gzL1003->GetXaxis()->SetLabelSize(0.06);
   Graph_gzL1003->GetXaxis()->SetTitleSize(0.05);
   Graph_gzL1003->GetXaxis()->SetTitleOffset(1.4);
   Graph_gzL1003->GetXaxis()->SetTitleFont(42);
   Graph_gzL1003->GetYaxis()->SetTitle(" Z resolution [#mum]");
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
   
   Double_t gzS_fx1004[7] = {
   15,
   25,
   35,
   45,
   55,
   65,
   75};
   Double_t gzS_fy1004[7] = {
   2.285882,
   1.843463,
   1.588263,
   1.392894,
   1.260514,
   1.138672,
   1.187909};
   Double_t gzS_fex1004[7] = {
   2.886751,
   2.886751,
   2.886751,
   2.886751,
   2.886751,
   2.886751,
   2.886751};
   Double_t gzS_fey1004[7] = {
   0.08930801,
   0.02226561,
   0.01173186,
   0.0117089,
   0.02010277,
   0.03319801,
   0.1601415};
   gre = new TGraphErrors(7,gzS_fx1004,gzS_fy1004,gzS_fex1004,gzS_fey1004);
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
   
   TH1F *Graph_gzS1004 = new TH1F("Graph_gzS1004","",100,5.535898,84.4641);
   Graph_gzS1004->SetMinimum(0.8930251);
   Graph_gzS1004->SetMaximum(2.509933);
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
