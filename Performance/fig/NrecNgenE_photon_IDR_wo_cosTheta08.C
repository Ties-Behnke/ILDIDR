void NrecNgenE_photon_IDR_wo_cosTheta08()
{
//=========Macro generated from canvas: cP/
//=========  (Thu Aug  1 12:12:23 2019) by ROOT version6.08/06
   TCanvas *cP = new TCanvas("cP", "",415,1103,600,600);
   gStyle->SetOptStat(0);
   cP->Range(-69.51389,0.9678378,278.0556,1.035405);
   cP->SetFillColor(10);
   cP->SetBorderMode(0);
   cP->SetBorderSize(2);
   cP->SetTickx(1);
   cP->SetTicky(1);
   cP->SetLeftMargin(0.2);
   cP->SetRightMargin(0.08);
   cP->SetTopMargin(0.08);
   cP->SetBottomMargin(0.18);
   cP->SetFrameLineWidth(3);
   cP->SetFrameBorderMode(0);
   cP->SetFrameLineWidth(3);
   cP->SetFrameBorderMode(0);
   
   Double_t gPl5_fx1003[16] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   60,
   80,
   105,
   135,
   175,
   225};
   Double_t gPl5_fy1003[16] = {
   0.997488,
   0.9974114,
   0.9975333,
   0.9983038,
   0.9993479,
   1.00026,
   1.00125,
   1.00224,
   1.003234,
   1.004169,
   1.004492,
   1.004769,
   1.005,
   1.004786,
   1.00775,
   1.01157};
   Double_t gPl5_fex1003[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   10,
   15,
   15,
   25,
   25};
   Double_t gPl5_fey1003[16] = {
   5.934448e-05,
   4.437959e-05,
   5.620316e-05,
   8.586822e-05,
   0.0001216923,
   0.0001672967,
   0.0002190458,
   0.0002764027,
   0.0003447975,
   0.0004099433,
   0.0003586246,
   0.0003738325,
   0.0005802072,
   0.0008465255,
   0.001331098,
   0.001480839};
   TGraphErrors *gre = new TGraphErrors(16,gPl5_fx1003,gPl5_fy1003,gPl5_fex1003,gPl5_fey1003);
   gre->SetName("gPl5");
   gre->SetTitle(";E_{MC} [GeV];#bar{N_{rec}/N_{gen}}");
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
   
   TH1F *Graph_gPl51003 = new TH1F("Graph_gPl51003","",100,0,275);
   Graph_gPl51003->SetMinimum(0.98);
   Graph_gPl51003->SetMaximum(1.03);
   Graph_gPl51003->SetDirectory(0);
   Graph_gPl51003->SetStats(0);
   Graph_gPl51003->SetLineWidth(3);
   Graph_gPl51003->SetMarkerStyle(20);
   Graph_gPl51003->SetMarkerSize(1.3);
   Graph_gPl51003->GetXaxis()->SetTitle("E_{MC} [GeV]");
   Graph_gPl51003->GetXaxis()->SetRange(1,91);
   Graph_gPl51003->GetXaxis()->SetNdivisions(506);
   Graph_gPl51003->GetXaxis()->SetLabelFont(42);
   Graph_gPl51003->GetXaxis()->SetLabelOffset(0.015);
   Graph_gPl51003->GetXaxis()->SetLabelSize(0.06);
   Graph_gPl51003->GetXaxis()->SetTitleSize(0.07);
   Graph_gPl51003->GetXaxis()->SetTitleFont(42);
   Graph_gPl51003->GetYaxis()->SetTitle("#bar{N_{rec}/N_{gen}}");
   Graph_gPl51003->GetYaxis()->SetNdivisions(506);
   Graph_gPl51003->GetYaxis()->SetLabelFont(42);
   Graph_gPl51003->GetYaxis()->SetLabelOffset(0.015);
   Graph_gPl51003->GetYaxis()->SetLabelSize(0.06);
   Graph_gPl51003->GetYaxis()->SetTitleSize(0.07);
   Graph_gPl51003->GetYaxis()->SetTitleOffset(1.4);
   Graph_gPl51003->GetYaxis()->SetTitleFont(42);
   Graph_gPl51003->GetZaxis()->SetLabelFont(42);
   Graph_gPl51003->GetZaxis()->SetLabelOffset(0.015);
   Graph_gPl51003->GetZaxis()->SetLabelSize(0.06);
   Graph_gPl51003->GetZaxis()->SetTitleSize(0.07);
   Graph_gPl51003->GetZaxis()->SetTitleOffset(1.1);
   Graph_gPl51003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gPl51003);
   
   gre->Draw("ape");
   
   Double_t gPs5_fx1004[16] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   60,
   80,
   105,
   135,
   175,
   225};
   Double_t gPs5_fy1004[16] = {
   0.9972103,
   0.9973051,
   0.9975641,
   0.9982582,
   0.9994572,
   1.000598,
   1.001478,
   1.002684,
   1.003741,
   1.003932,
   1.004693,
   1.005305,
   1.005882,
   1.006653,
   1.009399,
   1.017188};
   Double_t gPs5_fex1004[16] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   10,
   10,
   15,
   15,
   25,
   25};
   Double_t gPs5_fey1004[16] = {
   5.93396e-05,
   4.36522e-05,
   5.442476e-05,
   8.272264e-05,
   0.0001174963,
   0.0001588216,
   0.0002064932,
   0.0002615688,
   0.0003136241,
   0.0003701924,
   0.0003309125,
   0.0003422681,
   0.0005192888,
   0.0007394803,
   0.001156066,
   0.001336853};
   gre = new TGraphErrors(16,gPs5_fx1004,gPs5_fy1004,gPs5_fex1004,gPs5_fey1004);
   gre->SetName("gPs5");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_gPs51004 = new TH1F("Graph_gPs51004","",100,0,275);
   Graph_gPs51004->SetMinimum(0.9950136);
   Graph_gPs51004->SetMaximum(1.020662);
   Graph_gPs51004->SetDirectory(0);
   Graph_gPs51004->SetStats(0);
   Graph_gPs51004->SetLineWidth(3);
   Graph_gPs51004->SetMarkerStyle(20);
   Graph_gPs51004->SetMarkerSize(1.3);
   Graph_gPs51004->GetXaxis()->SetNdivisions(506);
   Graph_gPs51004->GetXaxis()->SetLabelFont(42);
   Graph_gPs51004->GetXaxis()->SetLabelOffset(0.015);
   Graph_gPs51004->GetXaxis()->SetLabelSize(0.06);
   Graph_gPs51004->GetXaxis()->SetTitleSize(0.07);
   Graph_gPs51004->GetXaxis()->SetTitleFont(42);
   Graph_gPs51004->GetYaxis()->SetNdivisions(506);
   Graph_gPs51004->GetYaxis()->SetLabelFont(42);
   Graph_gPs51004->GetYaxis()->SetLabelOffset(0.015);
   Graph_gPs51004->GetYaxis()->SetLabelSize(0.06);
   Graph_gPs51004->GetYaxis()->SetTitleSize(0.07);
   Graph_gPs51004->GetYaxis()->SetTitleOffset(1.1);
   Graph_gPs51004->GetYaxis()->SetTitleFont(42);
   Graph_gPs51004->GetZaxis()->SetLabelFont(42);
   Graph_gPs51004->GetZaxis()->SetLabelOffset(0.015);
   Graph_gPs51004->GetZaxis()->SetLabelSize(0.06);
   Graph_gPs51004->GetZaxis()->SetTitleSize(0.07);
   Graph_gPs51004->GetZaxis()->SetTitleOffset(1.1);
   Graph_gPs51004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gPs51004);
   
   gre->Draw("pe ");
   
   TLegend *leg = new TLegend(0.25,0.67,0.5,0.77,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(3);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gPl5","IDR-L","elp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(62);
   entry=leg->AddEntry("gPs5","IDR-S","elp");

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
   TLatex *   tex = new TLatex(0.25,0.8,"#scale[1.5]{#font[62]{ILD}}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   cP->Modified();
   cP->cd();
   cP->SetSelected(cP);
}
