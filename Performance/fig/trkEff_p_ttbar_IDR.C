void trkEff_p_ttbar_IDR()
{
//=========Macro generated from canvas: momentum/momentum
//=========  (Tue Jun 25 16:06:46 2019) by ROOT version 6.14/04
   TCanvas *momentum = new TCanvas("momentum", "momentum",1,26,600,600);
   gStyle->SetOptStat(0);
   momentum->Range(-1.310737,0.6197297,2.28789,1.065676);
   momentum->SetFillColor(10);
   momentum->SetBorderMode(0);
   momentum->SetBorderSize(2);
   momentum->SetLogx();
   momentum->SetTickx(1);
   momentum->SetTicky(1);
   momentum->SetLeftMargin(0.17);
   momentum->SetRightMargin(0.08);
   momentum->SetTopMargin(0.08);
   momentum->SetBottomMargin(0.18);
   momentum->SetFrameLineWidth(2);
   momentum->SetFrameBorderMode(0);
   momentum->SetFrameLineWidth(2);
   momentum->SetFrameBorderMode(0);
   Double_t xAxis15[14] = {0.01, 0.1, 0.2, 0.3, 0.5, 0.7, 1, 2, 5, 10, 20, 50, 100, 300}; 
   
   TEfficiency * hist_p_t_clone21 = new TEfficiency("hist_p_t_clone","",13,xAxis15);
   
   hist_p_t_clone21->SetConfidenceLevel(0.6826895);
   hist_p_t_clone21->SetBetaAlpha(1);
   hist_p_t_clone21->SetBetaBeta(1);
   hist_p_t_clone21->SetWeight(1);
   hist_p_t_clone21->SetStatisticOption(0);
   hist_p_t_clone21->SetPosteriorMode(0);
   hist_p_t_clone21->SetShortestInterval(0);
   hist_p_t_clone21->SetTotalEvents(0,0);
   hist_p_t_clone21->SetPassedEvents(0,0);
   hist_p_t_clone21->SetTotalEvents(1,0);
   hist_p_t_clone21->SetPassedEvents(1,0);
   hist_p_t_clone21->SetTotalEvents(2,132);
   hist_p_t_clone21->SetPassedEvents(2,109);
   hist_p_t_clone21->SetTotalEvents(3,673);
   hist_p_t_clone21->SetPassedEvents(3,546);
   hist_p_t_clone21->SetTotalEvents(4,2074);
   hist_p_t_clone21->SetPassedEvents(4,1949);
   hist_p_t_clone21->SetTotalEvents(5,2259);
   hist_p_t_clone21->SetPassedEvents(5,2223);
   hist_p_t_clone21->SetTotalEvents(6,3007);
   hist_p_t_clone21->SetPassedEvents(6,3005);
   hist_p_t_clone21->SetTotalEvents(7,9952);
   hist_p_t_clone21->SetPassedEvents(7,9951);
   hist_p_t_clone21->SetTotalEvents(8,13320);
   hist_p_t_clone21->SetPassedEvents(8,13320);
   hist_p_t_clone21->SetTotalEvents(9,7533);
   hist_p_t_clone21->SetPassedEvents(9,7533);
   hist_p_t_clone21->SetTotalEvents(10,4194);
   hist_p_t_clone21->SetPassedEvents(10,4194);
   hist_p_t_clone21->SetTotalEvents(11,1702);
   hist_p_t_clone21->SetPassedEvents(11,1701);
   hist_p_t_clone21->SetTotalEvents(12,147);
   hist_p_t_clone21->SetPassedEvents(12,147);
   hist_p_t_clone21->SetTotalEvents(13,3);
   hist_p_t_clone21->SetPassedEvents(13,3);
   hist_p_t_clone21->SetTotalEvents(14,0);
   hist_p_t_clone21->SetPassedEvents(14,0);
   hist_p_t_clone21->SetFillColor(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hist_p_t_clone21->SetLineColor(ci);
   hist_p_t_clone21->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hist_p_t_clone21->SetMarkerColor(ci);
   hist_p_t_clone21->SetMarkerStyle(20);
   hist_p_t_clone21->SetMarkerSize(0.9);
   hist_p_t_clone21->Draw("ap");
   Double_t xAxis16[14] = {0.01, 0.1, 0.2, 0.3, 0.5, 0.7, 1, 2, 5, 10, 20, 50, 100, 300}; 
   
   TEfficiency * hist_p_t_clone22 = new TEfficiency("hist_p_t_clone","",13,xAxis16);
   
   hist_p_t_clone22->SetConfidenceLevel(0.6826895);
   hist_p_t_clone22->SetBetaAlpha(1);
   hist_p_t_clone22->SetBetaBeta(1);
   hist_p_t_clone22->SetWeight(1);
   hist_p_t_clone22->SetStatisticOption(0);
   hist_p_t_clone22->SetPosteriorMode(0);
   hist_p_t_clone22->SetShortestInterval(0);
   hist_p_t_clone22->SetTotalEvents(0,0);
   hist_p_t_clone22->SetPassedEvents(0,0);
   hist_p_t_clone22->SetTotalEvents(1,0);
   hist_p_t_clone22->SetPassedEvents(1,0);
   hist_p_t_clone22->SetTotalEvents(2,117);
   hist_p_t_clone22->SetPassedEvents(2,85);
   hist_p_t_clone22->SetTotalEvents(3,680);
   hist_p_t_clone22->SetPassedEvents(3,534);
   hist_p_t_clone22->SetTotalEvents(4,2091);
   hist_p_t_clone22->SetPassedEvents(4,1900);
   hist_p_t_clone22->SetTotalEvents(5,2299);
   hist_p_t_clone22->SetPassedEvents(5,2247);
   hist_p_t_clone22->SetTotalEvents(6,3302);
   hist_p_t_clone22->SetPassedEvents(6,3289);
   hist_p_t_clone22->SetTotalEvents(7,10396);
   hist_p_t_clone22->SetPassedEvents(7,10396);
   hist_p_t_clone22->SetTotalEvents(8,13848);
   hist_p_t_clone22->SetPassedEvents(8,13848);
   hist_p_t_clone22->SetTotalEvents(9,7797);
   hist_p_t_clone22->SetPassedEvents(9,7797);
   hist_p_t_clone22->SetTotalEvents(10,4357);
   hist_p_t_clone22->SetPassedEvents(10,4357);
   hist_p_t_clone22->SetTotalEvents(11,1766);
   hist_p_t_clone22->SetPassedEvents(11,1766);
   hist_p_t_clone22->SetTotalEvents(12,151);
   hist_p_t_clone22->SetPassedEvents(12,151);
   hist_p_t_clone22->SetTotalEvents(13,5);
   hist_p_t_clone22->SetPassedEvents(13,5);
   hist_p_t_clone22->SetTotalEvents(14,0);
   hist_p_t_clone22->SetPassedEvents(14,0);
   hist_p_t_clone22->SetFillColor(10);

   ci = TColor::GetColor("#ff0000");
   hist_p_t_clone22->SetLineColor(ci);
   hist_p_t_clone22->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hist_p_t_clone22->SetMarkerColor(ci);
   hist_p_t_clone22->SetMarkerStyle(24);
   hist_p_t_clone22->SetMarkerSize(0.95);
   hist_p_t_clone22->Draw("samep");
   
   TLegend *leg = new TLegend(0.3,0.25,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","t#bar{t} @ 500 GeV - p_{T} > 100 MeV, cos(#theta) < 0.95","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_p_t_clone","IDR-L","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_p_t_clone","IDR-S","epl");

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
   momentum->Modified();
   momentum->cd();
   momentum->SetSelected(momentum);
}
