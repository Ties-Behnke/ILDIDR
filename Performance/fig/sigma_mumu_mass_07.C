void sigma_mumu_mass_07()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed May  8 15:41:15 2019) by ROOT version6.08/06
   TCanvas *c1 = new TCanvas("c1", "c1",1115,50,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.3055556,-0.09031898,1.083333,0.3202219);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.22);
   c1->SetRightMargin(0.06);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.22);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   
   TH1F *nnh_mumu_l__1__1 = new TH1F("nnh_mumu_l__1__1","ILD",20,0,1);
   nnh_mumu_l__1__1->SetBinContent(1,0.126373);
   nnh_mumu_l__1__1->SetBinContent(2,0.2736939);
   nnh_mumu_l__1__1->SetBinContent(3,0.2325504);
   nnh_mumu_l__1__1->SetBinContent(4,0.1335386);
   nnh_mumu_l__1__1->SetBinContent(5,0.08242983);
   nnh_mumu_l__1__1->SetBinContent(6,0.04932373);
   nnh_mumu_l__1__1->SetBinContent(7,0.04143012);
   nnh_mumu_l__1__1->SetBinContent(8,0.03314555);
   nnh_mumu_l__1__1->SetBinContent(9,0.0156517);
   nnh_mumu_l__1__1->SetBinContent(10,0.007650008);
   nnh_mumu_l__1__1->SetBinContent(11,0.003587238);
   nnh_mumu_l__1__1->SetBinContent(12,0.0006258814);
   nnh_mumu_l__1__1->SetBinError(1,0.008440732);
   nnh_mumu_l__1__1->SetBinError(2,0.01242018);
   nnh_mumu_l__1__1->SetBinError(3,0.01144739);
   nnh_mumu_l__1__1->SetBinError(4,0.008664075);
   nnh_mumu_l__1__1->SetBinError(5,0.006791507);
   nnh_mumu_l__1__1->SetBinError(6,0.005230725);
   nnh_mumu_l__1__1->SetBinError(7,0.004753376);
   nnh_mumu_l__1__1->SetBinError(8,0.004258907);
   nnh_mumu_l__1__1->SetBinError(9,0.002931107);
   nnh_mumu_l__1__1->SetBinError(10,0.00203411);
   nnh_mumu_l__1__1->SetBinError(11,0.001382086);
   nnh_mumu_l__1__1->SetBinError(12,0.0005644539);
   nnh_mumu_l__1__1->SetEntries(2410);
   nnh_mumu_l__1__1->SetStats(0);
   nnh_mumu_l__1__1->SetLineColor(4);
   nnh_mumu_l__1__1->SetLineWidth(3);
   nnh_mumu_l__1__1->SetMarkerColor(4);
   nnh_mumu_l__1__1->SetMarkerStyle(20);
   nnh_mumu_l__1__1->SetMarkerSize(1.3);
   nnh_mumu_l__1__1->GetXaxis()->SetTitle("#sigma(M_{#mu^{+}#mu^{-}}) [GeV]");
   nnh_mumu_l__1__1->GetXaxis()->SetNdivisions(506);
   nnh_mumu_l__1__1->GetXaxis()->SetLabelFont(42);
   nnh_mumu_l__1__1->GetXaxis()->SetLabelOffset(0.015);
   nnh_mumu_l__1__1->GetXaxis()->SetLabelSize(0.06);
   nnh_mumu_l__1__1->GetXaxis()->SetTitleSize(0.07);
   nnh_mumu_l__1__1->GetXaxis()->SetTitleFont(42);
   nnh_mumu_l__1__1->GetYaxis()->SetTitle("Normalized / 0.05 GeV");
   nnh_mumu_l__1__1->GetYaxis()->SetNdivisions(506);
   nnh_mumu_l__1__1->GetYaxis()->SetLabelFont(42);
   nnh_mumu_l__1__1->GetYaxis()->SetLabelOffset(0.015);
   nnh_mumu_l__1__1->GetYaxis()->SetLabelSize(0.06);
   nnh_mumu_l__1__1->GetYaxis()->SetTitleSize(0.07);
   nnh_mumu_l__1__1->GetYaxis()->SetTitleOffset(1.4);
   nnh_mumu_l__1__1->GetYaxis()->SetTitleFont(42);
   nnh_mumu_l__1__1->GetZaxis()->SetLabelFont(42);
   nnh_mumu_l__1__1->GetZaxis()->SetLabelOffset(0.015);
   nnh_mumu_l__1__1->GetZaxis()->SetLabelSize(0.06);
   nnh_mumu_l__1__1->GetZaxis()->SetTitleSize(0.07);
   nnh_mumu_l__1__1->GetZaxis()->SetTitleOffset(1.1);
   nnh_mumu_l__1__1->GetZaxis()->SetTitleFont(42);
   nnh_mumu_l__1__1->Draw("HIST");
   
   TH1F *nnh_mumu_s__1__2 = new TH1F("nnh_mumu_s__1__2","ILD",20,0,1);
   nnh_mumu_s__1__2->SetBinContent(1,0.05019242);
   nnh_mumu_s__1__2->SetBinContent(2,0.2135816);
   nnh_mumu_s__1__2->SetBinContent(3,0.2175534);
   nnh_mumu_s__1__2->SetBinContent(4,0.1747205);
   nnh_mumu_s__1__2->SetBinContent(5,0.09721509);
   nnh_mumu_s__1__2->SetBinContent(6,0.0779246);
   nnh_mumu_s__1__2->SetBinContent(7,0.04184206);
   nnh_mumu_s__1__2->SetBinContent(8,0.03651274);
   nnh_mumu_s__1__2->SetBinContent(9,0.03909196);
   nnh_mumu_s__1__2->SetBinContent(10,0.03331691);
   nnh_mumu_s__1__2->SetBinContent(11,0.008684477);
   nnh_mumu_s__1__2->SetBinContent(12,0.006280031);
   nnh_mumu_s__1__2->SetBinContent(13,0.001855782);
   nnh_mumu_s__1__2->SetBinContent(14,0.001202221);
   nnh_mumu_s__1__2->SetBinContent(15,2.622515e-05);
   nnh_mumu_s__1__2->SetBinError(1,0.005287998);
   nnh_mumu_s__1__2->SetBinError(2,0.0109086);
   nnh_mumu_s__1__2->SetBinError(3,0.01100787);
   nnh_mumu_s__1__2->SetBinError(4,0.009861555);
   nnh_mumu_s__1__2->SetBinError(5,0.007352768);
   nnh_mumu_s__1__2->SetBinError(6,0.006571965);
   nnh_mumu_s__1__2->SetBinError(7,0.004795492);
   nnh_mumu_s__1__2->SetBinError(8,0.004460036);
   nnh_mumu_s__1__2->SetBinError(9,0.004597582);
   nnh_mumu_s__1__2->SetBinError(10,0.004246062);
   nnh_mumu_s__1__2->SetBinError(11,0.002159462);
   nnh_mumu_s__1__2->SetBinError(12,0.001849044);
   nnh_mumu_s__1__2->SetBinError(13,0.0009662788);
   nnh_mumu_s__1__2->SetBinError(14,0.0007887696);
   nnh_mumu_s__1__2->SetBinError(15,1.51411e-05);
   nnh_mumu_s__1__2->SetEntries(2424);
   nnh_mumu_s__1__2->SetStats(0);
   nnh_mumu_s__1__2->SetLineColor(2);
   nnh_mumu_s__1__2->SetLineStyle(2);
   nnh_mumu_s__1__2->SetLineWidth(3);
   nnh_mumu_s__1__2->SetMarkerColor(2);
   nnh_mumu_s__1__2->SetMarkerStyle(20);
   nnh_mumu_s__1__2->SetMarkerSize(1.3);
   nnh_mumu_s__1__2->GetXaxis()->SetNdivisions(506);
   nnh_mumu_s__1__2->GetXaxis()->SetLabelFont(42);
   nnh_mumu_s__1__2->GetXaxis()->SetLabelOffset(0.015);
   nnh_mumu_s__1__2->GetXaxis()->SetLabelSize(0.06);
   nnh_mumu_s__1__2->GetXaxis()->SetTitleSize(0.07);
   nnh_mumu_s__1__2->GetXaxis()->SetTitleFont(42);
   nnh_mumu_s__1__2->GetYaxis()->SetNdivisions(506);
   nnh_mumu_s__1__2->GetYaxis()->SetLabelFont(42);
   nnh_mumu_s__1__2->GetYaxis()->SetLabelOffset(0.015);
   nnh_mumu_s__1__2->GetYaxis()->SetLabelSize(0.06);
   nnh_mumu_s__1__2->GetYaxis()->SetTitleSize(0.07);
   nnh_mumu_s__1__2->GetYaxis()->SetTitleOffset(1.1);
   nnh_mumu_s__1__2->GetYaxis()->SetTitleFont(42);
   nnh_mumu_s__1__2->GetZaxis()->SetLabelFont(42);
   nnh_mumu_s__1__2->GetZaxis()->SetLabelOffset(0.015);
   nnh_mumu_s__1__2->GetZaxis()->SetLabelSize(0.06);
   nnh_mumu_s__1__2->GetZaxis()->SetTitleSize(0.07);
   nnh_mumu_s__1__2->GetZaxis()->SetTitleOffset(1.1);
   nnh_mumu_s__1__2->GetZaxis()->SetTitleFont(42);
   nnh_mumu_s__1__2->Draw("same HIST");
   
   TPaveText *pt = new TPaveText(0.75,0.8,0.9,0.9,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(3);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("ILD");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.55,0.6,0.75,0.8,NULL,"brNDC");
   leg->SetHeader("H #rightarrow #mu^{+}#mu^{-}");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(3);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nnh_mumu_l__1","IDR-L","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("nnh_mumu_s__1","IDR-S","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
