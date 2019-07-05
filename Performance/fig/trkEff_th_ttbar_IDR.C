void trkEff_th_ttbar_IDR()
{
//=========Macro generated from canvas: theta/theta
//=========  (Tue Jun 25 16:06:46 2019) by ROOT version 6.14/04
   TCanvas *theta = new TCanvas("theta", "theta",1,572,600,600);
   gStyle->SetOptStat(0);
   theta->Range(-0.2266667,0.8732432,1.106667,1.021892);
   theta->SetFillColor(10);
   theta->SetBorderMode(0);
   theta->SetBorderSize(2);
   theta->SetTickx(1);
   theta->SetTicky(1);
   theta->SetLeftMargin(0.17);
   theta->SetRightMargin(0.08);
   theta->SetTopMargin(0.08);
   theta->SetBottomMargin(0.18);
   theta->SetFrameLineWidth(2);
   theta->SetFrameBorderMode(0);
   theta->SetFrameLineWidth(2);
   theta->SetFrameBorderMode(0);
   
   TEfficiency * hist_th_t_clone23 = new TEfficiency("hist_th_t_clone","",20,0,1);
   
   hist_th_t_clone23->SetConfidenceLevel(0.6826895);
   hist_th_t_clone23->SetBetaAlpha(1);
   hist_th_t_clone23->SetBetaBeta(1);
   hist_th_t_clone23->SetWeight(1);
   hist_th_t_clone23->SetStatisticOption(0);
   hist_th_t_clone23->SetPosteriorMode(0);
   hist_th_t_clone23->SetShortestInterval(0);
   hist_th_t_clone23->SetTotalEvents(0,0);
   hist_th_t_clone23->SetPassedEvents(0,0);
   hist_th_t_clone23->SetTotalEvents(1,1969);
   hist_th_t_clone23->SetPassedEvents(1,1969);
   hist_th_t_clone23->SetTotalEvents(2,1951);
   hist_th_t_clone23->SetPassedEvents(2,1951);
   hist_th_t_clone23->SetTotalEvents(3,1839);
   hist_th_t_clone23->SetPassedEvents(3,1839);
   hist_th_t_clone23->SetTotalEvents(4,1950);
   hist_th_t_clone23->SetPassedEvents(4,1950);
   hist_th_t_clone23->SetTotalEvents(5,2011);
   hist_th_t_clone23->SetPassedEvents(5,2011);
   hist_th_t_clone23->SetTotalEvents(6,2016);
   hist_th_t_clone23->SetPassedEvents(6,2016);
   hist_th_t_clone23->SetTotalEvents(7,1874);
   hist_th_t_clone23->SetPassedEvents(7,1874);
   hist_th_t_clone23->SetTotalEvents(8,2033);
   hist_th_t_clone23->SetPassedEvents(8,2033);
   hist_th_t_clone23->SetTotalEvents(9,1963);
   hist_th_t_clone23->SetPassedEvents(9,1962);
   hist_th_t_clone23->SetTotalEvents(10,1957);
   hist_th_t_clone23->SetPassedEvents(10,1957);
   hist_th_t_clone23->SetTotalEvents(11,1901);
   hist_th_t_clone23->SetPassedEvents(11,1901);
   hist_th_t_clone23->SetTotalEvents(12,1970);
   hist_th_t_clone23->SetPassedEvents(12,1970);
   hist_th_t_clone23->SetTotalEvents(13,2008);
   hist_th_t_clone23->SetPassedEvents(13,2007);
   hist_th_t_clone23->SetTotalEvents(14,1985);
   hist_th_t_clone23->SetPassedEvents(14,1985);
   hist_th_t_clone23->SetTotalEvents(15,1848);
   hist_th_t_clone23->SetPassedEvents(15,1848);
   hist_th_t_clone23->SetTotalEvents(16,1935);
   hist_th_t_clone23->SetPassedEvents(16,1935);
   hist_th_t_clone23->SetTotalEvents(17,1834);
   hist_th_t_clone23->SetPassedEvents(17,1834);
   hist_th_t_clone23->SetTotalEvents(18,1799);
   hist_th_t_clone23->SetPassedEvents(18,1799);
   hist_th_t_clone23->SetTotalEvents(19,2008);
   hist_th_t_clone23->SetPassedEvents(19,2008);
   hist_th_t_clone23->SetTotalEvents(20,1606);
   hist_th_t_clone23->SetPassedEvents(20,1598);
   hist_th_t_clone23->SetTotalEvents(21,0);
   hist_th_t_clone23->SetPassedEvents(21,0);
   hist_th_t_clone23->SetFillColor(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hist_th_t_clone23->SetLineColor(ci);
   hist_th_t_clone23->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hist_th_t_clone23->SetMarkerColor(ci);
   hist_th_t_clone23->SetMarkerStyle(20);
   hist_th_t_clone23->SetMarkerSize(0.9);
   hist_th_t_clone23->Draw("ap");
   
   TEfficiency * hist_th_t_clone24 = new TEfficiency("hist_th_t_clone","",20,0,1);
   
   hist_th_t_clone24->SetConfidenceLevel(0.6826895);
   hist_th_t_clone24->SetBetaAlpha(1);
   hist_th_t_clone24->SetBetaBeta(1);
   hist_th_t_clone24->SetWeight(1);
   hist_th_t_clone24->SetStatisticOption(0);
   hist_th_t_clone24->SetPosteriorMode(0);
   hist_th_t_clone24->SetShortestInterval(0);
   hist_th_t_clone24->SetTotalEvents(0,0);
   hist_th_t_clone24->SetPassedEvents(0,0);
   hist_th_t_clone24->SetTotalEvents(1,2029);
   hist_th_t_clone24->SetPassedEvents(1,2029);
   hist_th_t_clone24->SetTotalEvents(2,2042);
   hist_th_t_clone24->SetPassedEvents(2,2042);
   hist_th_t_clone24->SetTotalEvents(3,1914);
   hist_th_t_clone24->SetPassedEvents(3,1914);
   hist_th_t_clone24->SetTotalEvents(4,2016);
   hist_th_t_clone24->SetPassedEvents(4,2016);
   hist_th_t_clone24->SetTotalEvents(5,2065);
   hist_th_t_clone24->SetPassedEvents(5,2065);
   hist_th_t_clone24->SetTotalEvents(6,2076);
   hist_th_t_clone24->SetPassedEvents(6,2076);
   hist_th_t_clone24->SetTotalEvents(7,1913);
   hist_th_t_clone24->SetPassedEvents(7,1913);
   hist_th_t_clone24->SetTotalEvents(8,2106);
   hist_th_t_clone24->SetPassedEvents(8,2106);
   hist_th_t_clone24->SetTotalEvents(9,2055);
   hist_th_t_clone24->SetPassedEvents(9,2055);
   hist_th_t_clone24->SetTotalEvents(10,2041);
   hist_th_t_clone24->SetPassedEvents(10,2041);
   hist_th_t_clone24->SetTotalEvents(11,1977);
   hist_th_t_clone24->SetPassedEvents(11,1977);
   hist_th_t_clone24->SetTotalEvents(12,2064);
   hist_th_t_clone24->SetPassedEvents(12,2064);
   hist_th_t_clone24->SetTotalEvents(13,2065);
   hist_th_t_clone24->SetPassedEvents(13,2065);
   hist_th_t_clone24->SetTotalEvents(14,2032);
   hist_th_t_clone24->SetPassedEvents(14,2032);
   hist_th_t_clone24->SetTotalEvents(15,1951);
   hist_th_t_clone24->SetPassedEvents(15,1951);
   hist_th_t_clone24->SetTotalEvents(16,2051);
   hist_th_t_clone24->SetPassedEvents(16,2051);
   hist_th_t_clone24->SetTotalEvents(17,2013);
   hist_th_t_clone24->SetPassedEvents(17,2013);
   hist_th_t_clone24->SetTotalEvents(18,1878);
   hist_th_t_clone24->SetPassedEvents(18,1878);
   hist_th_t_clone24->SetTotalEvents(19,2032);
   hist_th_t_clone24->SetPassedEvents(19,2032);
   hist_th_t_clone24->SetTotalEvents(20,1667);
   hist_th_t_clone24->SetPassedEvents(20,1650);
   hist_th_t_clone24->SetTotalEvents(21,0);
   hist_th_t_clone24->SetPassedEvents(21,0);
   hist_th_t_clone24->SetFillColor(10);

   ci = TColor::GetColor("#ff0000");
   hist_th_t_clone24->SetLineColor(ci);
   hist_th_t_clone24->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hist_th_t_clone24->SetMarkerColor(ci);
   hist_th_t_clone24->SetMarkerStyle(24);
   hist_th_t_clone24->SetMarkerSize(0.95);
   hist_th_t_clone24->Draw("samep");
   
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
   entry=leg->AddEntry("hist_th_t_clone","IDR-L","epl");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_th_t_clone","IDR-S","epl");

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
   TText *text = new TText(0.5,0.5,"P > 1 GeV");
   text->SetNDC();
   text->SetTextFont(42);
   text->SetTextSize(0.04);
   text->Draw();
   text = new TText(0.75,0.75,"ILD");
   text->SetNDC();

   ci = TColor::GetColor("#000099");
   text->SetTextColor(ci);
   text->SetTextFont(42);
   text->SetTextSize(0.07);
   text->Draw();
   theta->Modified();
   theta->cd();
   theta->SetSelected(theta);
}
