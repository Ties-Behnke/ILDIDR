void trkEff_pt_ttbar_IDR()
{
//=========Macro generated from canvas: transversemom/transversemom
//=========  (Tue Jun 25 16:06:45 2019) by ROOT version 6.14/04
   TCanvas *transversemom = new TCanvas("transversemom", "transversemom",1,572,600,600);
   gStyle->SetOptStat(0);
   transversemom->Range(-1.68,0.4954054,2.32,1.076486);
   transversemom->SetFillColor(10);
   transversemom->SetBorderMode(0);
   transversemom->SetBorderSize(2);
   transversemom->SetLogx();
   transversemom->SetTickx(1);
   transversemom->SetTicky(1);
   transversemom->SetLeftMargin(0.17);
   transversemom->SetRightMargin(0.08);
   transversemom->SetTopMargin(0.08);
   transversemom->SetBottomMargin(0.18);
   transversemom->SetFrameLineWidth(2);
   transversemom->SetFrameBorderMode(0);
   transversemom->SetFrameLineWidth(2);
   transversemom->SetFrameBorderMode(0);
   Double_t xAxis13[14] = {0.01, 0.1, 0.2, 0.3, 0.5, 0.7, 1, 2, 5, 10, 20, 50, 100, 300}; 
   
   TEfficiency * hist_pt_t_clone19 = new TEfficiency("hist_pt_t_clone","",13,xAxis13);
   
   hist_pt_t_clone19->SetConfidenceLevel(0.6826895);
   hist_pt_t_clone19->SetBetaAlpha(1);
   hist_pt_t_clone19->SetBetaBeta(1);
   hist_pt_t_clone19->SetWeight(1);
   hist_pt_t_clone19->SetStatisticOption(0);
   hist_pt_t_clone19->SetPosteriorMode(0);
   hist_pt_t_clone19->SetShortestInterval(0);
   hist_pt_t_clone19->SetTotalEvents(0,0);
   hist_pt_t_clone19->SetPassedEvents(0,0);
   hist_pt_t_clone19->SetTotalEvents(1,0);
   hist_pt_t_clone19->SetPassedEvents(1,0);
   hist_pt_t_clone19->SetTotalEvents(2,1140);
   hist_pt_t_clone19->SetPassedEvents(2,801);
   hist_pt_t_clone19->SetTotalEvents(3,1578);
   hist_pt_t_clone19->SetPassedEvents(3,1461);
   hist_pt_t_clone19->SetTotalEvents(4,3287);
   hist_pt_t_clone19->SetPassedEvents(4,3285);
   hist_pt_t_clone19->SetTotalEvents(5,2852);
   hist_pt_t_clone19->SetPassedEvents(5,2850);
   hist_pt_t_clone19->SetTotalEvents(6,3609);
   hist_pt_t_clone19->SetPassedEvents(6,3607);
   hist_pt_t_clone19->SetTotalEvents(7,10674);
   hist_pt_t_clone19->SetPassedEvents(7,10673);
   hist_pt_t_clone19->SetTotalEvents(8,12816);
   hist_pt_t_clone19->SetPassedEvents(8,12816);
   hist_pt_t_clone19->SetTotalEvents(9,6505);
   hist_pt_t_clone19->SetPassedEvents(9,6505);
   hist_pt_t_clone19->SetTotalEvents(10,3283);
   hist_pt_t_clone19->SetPassedEvents(10,3283);
   hist_pt_t_clone19->SetTotalEvents(11,1160);
   hist_pt_t_clone19->SetPassedEvents(11,1159);
   hist_pt_t_clone19->SetTotalEvents(12,72);
   hist_pt_t_clone19->SetPassedEvents(12,72);
   hist_pt_t_clone19->SetTotalEvents(13,0);
   hist_pt_t_clone19->SetPassedEvents(13,0);
   hist_pt_t_clone19->SetTotalEvents(14,0);
   hist_pt_t_clone19->SetPassedEvents(14,0);
   hist_pt_t_clone19->SetFillColor(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hist_pt_t_clone19->SetLineColor(ci);
   hist_pt_t_clone19->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hist_pt_t_clone19->SetMarkerColor(ci);
   hist_pt_t_clone19->SetMarkerStyle(20);
   hist_pt_t_clone19->SetMarkerSize(0.9);
   hist_pt_t_clone19->Draw("ap");
   Double_t xAxis14[14] = {0.01, 0.1, 0.2, 0.3, 0.5, 0.7, 1, 2, 5, 10, 20, 50, 100, 300}; 
   
   TEfficiency * hist_pt_t_clone20 = new TEfficiency("hist_pt_t_clone","",13,xAxis14);
   
   hist_pt_t_clone20->SetConfidenceLevel(0.6826895);
   hist_pt_t_clone20->SetBetaAlpha(1);
   hist_pt_t_clone20->SetBetaBeta(1);
   hist_pt_t_clone20->SetWeight(1);
   hist_pt_t_clone20->SetStatisticOption(0);
   hist_pt_t_clone20->SetPosteriorMode(0);
   hist_pt_t_clone20->SetShortestInterval(0);
   hist_pt_t_clone20->SetTotalEvents(0,0);
   hist_pt_t_clone20->SetPassedEvents(0,0);
   hist_pt_t_clone20->SetTotalEvents(1,0);
   hist_pt_t_clone20->SetPassedEvents(1,0);
   hist_pt_t_clone20->SetTotalEvents(2,1160);
   hist_pt_t_clone20->SetPassedEvents(2,778);
   hist_pt_t_clone20->SetTotalEvents(3,1610);
   hist_pt_t_clone20->SetPassedEvents(3,1377);
   hist_pt_t_clone20->SetTotalEvents(4,3294);
   hist_pt_t_clone20->SetPassedEvents(4,3277);
   hist_pt_t_clone20->SetTotalEvents(5,2932);
   hist_pt_t_clone20->SetPassedEvents(5,2927);
   hist_pt_t_clone20->SetTotalEvents(6,4061);
   hist_pt_t_clone20->SetPassedEvents(6,4060);
   hist_pt_t_clone20->SetTotalEvents(7,11127);
   hist_pt_t_clone20->SetPassedEvents(7,11125);
   hist_pt_t_clone20->SetTotalEvents(8,13289);
   hist_pt_t_clone20->SetPassedEvents(8,13288);
   hist_pt_t_clone20->SetTotalEvents(9,6726);
   hist_pt_t_clone20->SetPassedEvents(9,6726);
   hist_pt_t_clone20->SetTotalEvents(10,3392);
   hist_pt_t_clone20->SetPassedEvents(10,3392);
   hist_pt_t_clone20->SetTotalEvents(11,1204);
   hist_pt_t_clone20->SetPassedEvents(11,1204);
   hist_pt_t_clone20->SetTotalEvents(12,74);
   hist_pt_t_clone20->SetPassedEvents(12,74);
   hist_pt_t_clone20->SetTotalEvents(13,0);
   hist_pt_t_clone20->SetPassedEvents(13,0);
   hist_pt_t_clone20->SetTotalEvents(14,0);
   hist_pt_t_clone20->SetPassedEvents(14,0);
   hist_pt_t_clone20->SetFillColor(10);

   ci = TColor::GetColor("#ff0000");
   hist_pt_t_clone20->SetLineColor(ci);
   hist_pt_t_clone20->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hist_pt_t_clone20->SetMarkerColor(ci);
   hist_pt_t_clone20->SetMarkerStyle(24);
   hist_pt_t_clone20->SetMarkerSize(0.95);
   hist_pt_t_clone20->Draw("samep");
   
   TLegend *leg = new TLegend(0.3,0.25,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","t#bar{t} @ 500 GeV - p_{T} > 100 MeV, cos(#theta) < 0.99","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_pt_t_clone","IDR-L","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_pt_t_clone","IDR-S","epl");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(0.95);
   entry->SetTextFont(62);
   leg->Draw();
   TText *text = new TText(0.75,0.75,"ILD");
   text->SetNDC();

   ci = TColor::GetColor("#000099");
   text->SetTextColor(ci);
   text->SetTextFont(42);
   text->SetTextSize(0.07);
   text->Draw();
   transversemom->Modified();
   transversemom->cd();
   transversemom->SetSelected(transversemom);
}
