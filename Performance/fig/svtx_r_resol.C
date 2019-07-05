void svtx_r_resol()
{
//=========Macro generated from canvas: cr/
//=========  (Tue Apr  2 11:12:05 2019) by ROOT version6.08/06
   TCanvas *cr = new TCanvas("cr", "",415,1103,600,600);
   gStyle->SetOptStat(0);
   cr->Range(-1.346883,-0.9375,5.387534,5.3125);
   cr->SetFillColor(10);
   cr->SetBorderMode(0);
   cr->SetBorderSize(2);
   cr->SetTickx(1);
   cr->SetTicky(1);
   cr->SetLeftMargin(0.2);
   cr->SetRightMargin(0.05);
   cr->SetTopMargin(0.05);
   cr->SetBottomMargin(0.15);
   cr->SetFrameLineWidth(3);
   cr->SetFrameBorderMode(0);
   cr->SetFrameLineWidth(3);
   cr->SetFrameBorderMode(0);
   
   Double_t grL_fx1001[10] = {
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
   Double_t grL_fy1001[10] = {
   4.251667,
   3.370208,
   2.883923,
   2.632826,
   2.522123,
   2.32903,
   2.291907,
   2.17946,
   2.081341,
   2.07655};
   Double_t grL_fex1001[10] = {
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
   Double_t grL_fey1001[10] = {
   0.04060814,
   0.01756178,
   0.01539593,
   0.01613749,
   0.01806162,
   0.01742904,
   0.01874954,
   0.02073688,
   0.021927,
   0.02348982};
   TGraphErrors *gre = new TGraphErrors(10,grL_fx1001,grL_fy1001,grL_fex1001,grL_fey1001);
   gre->SetName("grL");
   gre->SetTitle(";Distance from IP [mm]; Transverse resolution [#mum]");
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
   
   TH1F *Graph_grL1001 = new TH1F("Graph_grL1001","",100,0,5.373205);
   Graph_grL1001->SetMinimum(0);
   Graph_grL1001->SetMaximum(5);
   Graph_grL1001->SetDirectory(0);
   Graph_grL1001->SetStats(0);
   Graph_grL1001->SetLineWidth(3);
   Graph_grL1001->SetMarkerStyle(20);
   Graph_grL1001->SetMarkerSize(1.3);
   Graph_grL1001->GetXaxis()->SetTitle("Distance from IP [mm]");
   Graph_grL1001->GetXaxis()->SetRange(1,94);
   Graph_grL1001->GetXaxis()->SetNdivisions(506);
   Graph_grL1001->GetXaxis()->SetLabelFont(42);
   Graph_grL1001->GetXaxis()->SetLabelOffset(0.015);
   Graph_grL1001->GetXaxis()->SetLabelSize(0.06);
   Graph_grL1001->GetXaxis()->SetTitleSize(0.05);
   Graph_grL1001->GetXaxis()->SetTitleOffset(1.4);
   Graph_grL1001->GetXaxis()->SetTitleFont(42);
   Graph_grL1001->GetYaxis()->SetTitle(" Transverse resolution [#mum]");
   Graph_grL1001->GetYaxis()->SetNdivisions(506);
   Graph_grL1001->GetYaxis()->SetLabelFont(42);
   Graph_grL1001->GetYaxis()->SetLabelOffset(0.015);
   Graph_grL1001->GetYaxis()->SetLabelSize(0.06);
   Graph_grL1001->GetYaxis()->SetTitleSize(0.05);
   Graph_grL1001->GetYaxis()->SetTitleOffset(1.7);
   Graph_grL1001->GetYaxis()->SetTitleFont(42);
   Graph_grL1001->GetZaxis()->SetLabelFont(42);
   Graph_grL1001->GetZaxis()->SetLabelOffset(0.015);
   Graph_grL1001->GetZaxis()->SetLabelSize(0.06);
   Graph_grL1001->GetZaxis()->SetTitleSize(0.07);
   Graph_grL1001->GetZaxis()->SetTitleOffset(1.1);
   Graph_grL1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_grL1001);
   
   gre->Draw("ap");
   
   Double_t grS_fx1002[10] = {
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
   Double_t grS_fy1002[10] = {
   4.146128,
   3.279062,
   2.863197,
   2.642392,
   2.507967,
   2.352571,
   2.267343,
   2.194223,
   2.094936,
   2.033276};
   Double_t grS_fex1002[10] = {
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
   Double_t grS_fey1002[10] = {
   0.04096969,
   0.01746468,
   0.01532163,
   0.01650278,
   0.01781184,
   0.01809085,
   0.01840162,
   0.02116479,
   0.02204316,
   0.0225357};
   gre = new TGraphErrors(10,grS_fx1002,grS_fy1002,grS_fex1002,grS_fey1002);
   gre->SetName("grS");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_grS1002 = new TH1F("Graph_grS1002","",100,0,5.373205);
   Graph_grS1002->SetMinimum(1.793105);
   Graph_grS1002->SetMaximum(4.404734);
   Graph_grS1002->SetDirectory(0);
   Graph_grS1002->SetStats(0);
   Graph_grS1002->SetLineWidth(3);
   Graph_grS1002->SetMarkerStyle(20);
   Graph_grS1002->SetMarkerSize(1.3);
   Graph_grS1002->GetXaxis()->SetNdivisions(506);
   Graph_grS1002->GetXaxis()->SetLabelFont(42);
   Graph_grS1002->GetXaxis()->SetLabelOffset(0.015);
   Graph_grS1002->GetXaxis()->SetLabelSize(0.06);
   Graph_grS1002->GetXaxis()->SetTitleSize(0.07);
   Graph_grS1002->GetXaxis()->SetTitleFont(42);
   Graph_grS1002->GetYaxis()->SetNdivisions(506);
   Graph_grS1002->GetYaxis()->SetLabelFont(42);
   Graph_grS1002->GetYaxis()->SetLabelOffset(0.015);
   Graph_grS1002->GetYaxis()->SetLabelSize(0.06);
   Graph_grS1002->GetYaxis()->SetTitleSize(0.07);
   Graph_grS1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_grS1002->GetYaxis()->SetTitleFont(42);
   Graph_grS1002->GetZaxis()->SetLabelFont(42);
   Graph_grS1002->GetZaxis()->SetLabelOffset(0.015);
   Graph_grS1002->GetZaxis()->SetLabelSize(0.06);
   Graph_grS1002->GetZaxis()->SetTitleSize(0.07);
   Graph_grS1002->GetZaxis()->SetTitleOffset(1.1);
   Graph_grS1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_grS1002);
   
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
   cr->Modified();
   cr->cd();
   cr->SetSelected(cr);
}
