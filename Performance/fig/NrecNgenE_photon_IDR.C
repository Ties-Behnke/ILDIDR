void NrecNgenE_photon_IDR()
{
//=========Macro generated from canvas: cP/
//=========  (Thu Aug  1 12:10:02 2019) by ROOT version6.08/06
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
   0.9970515,
   0.9973423,
   0.9978858,
   0.9986677,
   0.9996271,
   1.000495,
   1.001418,
   1.002324,
   1.003284,
   1.004245,
   1.004789,
   1.005155,
   1.005501,
   1.00547,
   1.009053,
   1.01378};
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
   5.398251e-05,
   3.92964e-05,
   4.91089e-05,
   7.635091e-05,
   0.0001089188,
   0.000150347,
   0.0001974587,
   0.0002489457,
   0.0003100048,
   0.000369401,
   0.0003236636,
   0.0003371885,
   0.0005217471,
   0.0007573547,
   0.001194813,
   0.001314547};
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
   0.9959189,
   0.9967397,
   0.9978908,
   0.9986522,
   0.9997273,
   1.000798,
   1.001629,
   1.002804,
   1.003866,
   1.004285,
   1.004903,
   1.005421,
   1.006088,
   1.006906,
   1.010184,
   1.018938};
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
   6.092732e-05,
   4.206391e-05,
   4.878419e-05,
   7.466738e-05,
   0.0001064965,
   0.0001437393,
   0.0001872312,
   0.0002381521,
   0.0002859637,
   0.0003375092,
   0.0002985669,
   0.0003080258,
   0.0004641956,
   0.0006574433,
   0.001029194,
   0.001180828};
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
   Graph_gPs51004->SetMinimum(0.9934318);
   Graph_gPs51004->SetMaximum(1.022545);
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
   TLatex *   tex = new TLatex(0.25,0.8,"#scale[1.5]{#font[62]{ILD}} #font[42]{preliminary}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   cP->Modified();
   cP->cd();
   cP->SetSelected(cP);
}
