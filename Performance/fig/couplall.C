{
//=========Macro generated from canvas: c1/histograms with bars
//=========  (Thu Nov 29 00:58:13 2012) by ROOT version5.34/02
   TCanvas *c1 = new TCanvas("c1", "histograms with bars",345,42,800,700);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0.01,0.01,0.99,0.99);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.625,-3.521653,5.625,0.7257725);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetLogy();
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   TH2F *hFram = new TH2F("hFram","Couplings",5,0,5,100,0.0001,4);
   hFram->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFram->SetLineColor(ci);
   //hFram->GetXaxis()->SetBinLabel(1,"#tilde{F}^{#gamma}_{1V}");
   //hFram->GetXaxis()->SetBinLabel(2,"#tilde{F}^{Z}_{1V}");
   //hFram->GetXaxis()->SetBinLabel(3,"#tilde{F}^{Z}_{1A}");
   //hFram->GetXaxis()->SetBinLabel(4,"#tilde{F}^{#gamma}_{2V}");
   //hFram->GetXaxis()->SetBinLabel(5,"#tilde{F}^{Z}_{2V}");
   hFram->GetXaxis()->SetBinLabel(1,"F^{#gamma}_{1V}");
   hFram->GetXaxis()->SetBinLabel(2,"F^{Z}_{1V}");
   hFram->GetXaxis()->SetBinLabel(3,"F^{Z}_{1A}");
   hFram->GetXaxis()->SetBinLabel(4,"F^{#gamma}_{2V}");
   hFram->GetXaxis()->SetBinLabel(5,"F^{Z}_{2V}");
   hFram->GetXaxis()->SetLabelFont(42);
   hFram->GetXaxis()->SetLabelSize(0.05);
   hFram->GetXaxis()->SetTitleSize(0.04);
   hFram->GetXaxis()->SetTickLength(0);
   hFram->GetXaxis()->SetTitleFont(42);
   hFram->GetYaxis()->SetTitle("Uncertainty");
   hFram->GetYaxis()->SetLabelFont(42);
   hFram->GetYaxis()->SetLabelSize(0.04);
   hFram->GetYaxis()->SetTitleOffset(1.4);
   hFram->GetYaxis()->SetTitleSize(0.04);
   hFram->GetYaxis()->SetTitleFont(42);
   hFram->GetZaxis()->SetLabelFont(42);
   hFram->GetZaxis()->SetLabelSize(0.04);
   hFram->GetZaxis()->SetTitleSize(0.035);
   hFram->GetZaxis()->SetTitleFont(42);
   hFram->Draw("");
   
   //LEP+HL-LHC-S2
   TH1F *hDivFR__3__1__1 = new TH1F("hDivFR__3__1__1","Division",5,0,5);
   hDivFR__3__1__1->SetBinContent(1,0.00001);
   hDivFR__3__1__1->SetBinContent(2,0.102);
   hDivFR__3__1__1->SetBinContent(3,0.102);
   hDivFR__3__1__1->SetBinContent(4,0.463);
   hDivFR__3__1__1->SetBinContent(5,0.255);
   hDivFR__3__1__1->SetBarOffset(0.08);
   hDivFR__3__1__1->SetBarWidth(0.25);
   hDivFR__3__1__1->SetEntries(1682);
   hDivFR__3__1__1->SetDirectory(0);
   hDivFR__3__1__1->SetStats(0);
   hDivFR__3__1__1->SetFillColor(2);

   ci = TColor::GetColor("#000099");
   hDivFR__3__1__1->SetLineColor(ci);
   hDivFR__3__1__1->GetXaxis()->SetBinLabel(1,"F^{#gamma}_{1V}");
   hDivFR__3__1__1->GetXaxis()->SetBinLabel(2,"F^{Z}_{1V}");
   hDivFR__3__1__1->GetXaxis()->SetBinLabel(3,"F^{Z}_{1A}");
   hDivFR__3__1__1->GetXaxis()->SetBinLabel(4,"F^{#gamma}_{2V}");
   hDivFR__3__1__1->GetXaxis()->SetBinLabel(5,"F^{Z}_{2V}");
   hDivFR__3__1__1->GetXaxis()->SetLabelFont(42);
   hDivFR__3__1__1->GetXaxis()->SetLabelSize(0.035);
   hDivFR__3__1__1->GetXaxis()->SetTitleSize(0.035);
   hDivFR__3__1__1->GetXaxis()->SetTitleFont(42);
   hDivFR__3__1__1->GetYaxis()->SetLabelFont(42);
   hDivFR__3__1__1->GetYaxis()->SetLabelSize(0.035);
   hDivFR__3__1__1->GetYaxis()->SetTitleSize(0.035);
   hDivFR__3__1__1->GetYaxis()->SetTitleFont(42);
   hDivFR__3__1__1->GetZaxis()->SetLabelFont(42);
   hDivFR__3__1__1->GetZaxis()->SetLabelSize(0.035);
   hDivFR__3__1__1->GetZaxis()->SetTitleSize(0.035);
   hDivFR__3__1__1->GetZaxis()->SetTitleFont(42);
   hDivFR__3__1__1->Draw("bar,same");
   
   //ILC500
   TH1F *hDiv__2__2__2 = new TH1F("hDiv__2__2__2","Division",5,0,5);
   hDiv__2__2__2->SetBinContent(1,0.0006);
   hDiv__2__2__2->SetBinContent(2,0.0011);
   hDiv__2__2__2->SetBinContent(3,0.0030);
   hDiv__2__2__2->SetBinContent(4,0.0005);
   hDiv__2__2__2->SetBinContent(5,0.0008);
   hDiv__2__2__2->SetBarOffset(0.32);
   hDiv__2__2__2->SetBarWidth(0.25);
   hDiv__2__2__2->SetEntries(3354);
   hDiv__2__2__2->SetDirectory(0);
   hDiv__2__2__2->SetStats(0);
   hDiv__2__2__2->SetFillColor(4);

   ci = TColor::GetColor("#000099");
   hDiv__2__2__2->SetLineColor(ci);
   hDiv__2__2__2->GetXaxis()->SetBinLabel(1,"F^{#gamma}_{1V}");
   hDiv__2__2__2->GetXaxis()->SetBinLabel(2,"F^{Z}_{1V}");
   hDiv__2__2__2->GetXaxis()->SetBinLabel(3,"F^{Z}_{1A}");
   hDiv__2__2__2->GetXaxis()->SetBinLabel(4,"F^{#gamma}_{2V}");
   hDiv__2__2__2->GetXaxis()->SetBinLabel(5,"F^{Z}_{2V}");
   hDiv__2__2__2->GetXaxis()->SetLabelFont(42);
   hDiv__2__2__2->GetXaxis()->SetLabelSize(0.035);
   hDiv__2__2__2->GetXaxis()->SetTitleSize(0.035);
   hDiv__2__2__2->GetXaxis()->SetTitleFont(42);
   hDiv__2__2__2->GetYaxis()->SetLabelFont(42);
   hDiv__2__2__2->GetYaxis()->SetLabelSize(0.035);
   hDiv__2__2__2->GetYaxis()->SetTitleSize(0.035);
   hDiv__2__2__2->GetYaxis()->SetTitleFont(42);
   hDiv__2__2__2->GetZaxis()->SetLabelFont(42);
   hDiv__2__2__2->GetZaxis()->SetLabelSize(0.035);
   hDiv__2__2__2->GetZaxis()->SetTitleSize(0.035);
   hDiv__2__2__2->GetZaxis()->SetTitleFont(42);
   hDiv__2__2__2->Draw("barsame");
   
   //FCCee
   TH1F *hDiv__4__2__2 = new TH1F("hDiv__4__2__2","Division",5,0,5);
   hDiv__4__2__2->SetBinContent(1,0.001);
   hDiv__4__2__2->SetBinContent(2,0.0022);
   hDiv__4__2__2->SetBinContent(3,0.025);
   hDiv__4__2__2->SetBinContent(4,0.0008);
   hDiv__4__2__2->SetBinContent(5,0.002);
   hDiv__4__2__2->SetBarOffset(0.56);
   hDiv__4__2__2->SetBarWidth(0.25);
   hDiv__4__2__2->SetEntries(3354);
   hDiv__4__2__2->SetDirectory(0);
   hDiv__4__2__2->SetStats(0);
   hDiv__4__2__2->SetFillColor(3);

   ci = TColor::GetColor("#000099");
   hDiv__4__2__2->SetLineColor(ci);
   hDiv__4__2__2->GetXaxis()->SetBinLabel(1,"F^{#gamma}_{1V}");
   hDiv__4__2__2->GetXaxis()->SetBinLabel(2,"F^{Z}_{1V}");
   hDiv__4__2__2->GetXaxis()->SetBinLabel(3,"F^{Z}_{1A}");
   hDiv__4__2__2->GetXaxis()->SetBinLabel(4,"F^{#gamma}_{2V}");
   hDiv__4__2__2->GetXaxis()->SetBinLabel(5,"F^{Z}_{2V}");
   hDiv__4__2__2->GetXaxis()->SetLabelFont(42);
   hDiv__4__2__2->GetXaxis()->SetLabelSize(0.035);
   hDiv__4__2__2->GetXaxis()->SetTitleSize(0.035);
   hDiv__4__2__2->GetXaxis()->SetTitleFont(42);
   hDiv__4__2__2->GetYaxis()->SetLabelFont(42);
   hDiv__4__2__2->GetYaxis()->SetLabelSize(0.035);
   hDiv__4__2__2->GetYaxis()->SetTitleSize(0.035);
   hDiv__4__2__2->GetYaxis()->SetTitleFont(42);
   hDiv__4__2__2->GetZaxis()->SetLabelFont(42);
   hDiv__4__2__2->GetZaxis()->SetLabelSize(0.035);
   hDiv__4__2__2->GetZaxis()->SetTitleSize(0.035);
   hDiv__4__2__2->GetZaxis()->SetTitleFont(42);
   hDiv__4__2__2->Draw("barsame");




   //TLegend *leg = new TLegend(0.429627,0.6030982,0.7844241,0.8912446,NULL,"brNDC")
   TLegend *leg = new TLegend(0.15,0.72,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","ILC, #sqrt{s}=500 GeV, L=3200 fb^{-1} (preliminary)","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextSize(0.028);   

   entry=leg->AddEntry("NULL","#splitline{LEP+HL-LHC-S2}{#scale[0.8]{arxiv:1907.10619}}","f");
   //entry=leg->AddEntry("NULL","#splitline{LHC, #sqrt{s}=14 TeV, L=3000 fb^{-1}}{#splitline{#scale[0.8]{Phys.Rev.D71 (2005) 054013}}{#scale[0.8]{Phys.Rev.D73 (2006) 034016}}}","f");
   //entry=leg->AddEntry("NULL","LHC","f");   
   //entry=leg->AddEntry("NULL","#splitline{Phys.Rev.D71 (2005) 054013}{Phys.Rev.D73 (2006) 034016}","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextSize(0.028);   

   entry=leg->AddEntry("NULL","#splitline{FCC-ee, #sqrt{s}=365 GeV, L=5000 fb^{-1}}{#scale[0.8]{arxiv:1503.01325}}","f");
   //entry=leg->AddEntry("NULL","#splitline{LHC, #sqrt{s}=14 TeV, L=3000 fb^{-1}}{#splitline{#scale[0.8]{Phys.Rev.D71 (2005) 054013}}{#scale[0.8]{Phys.Rev.D73 (2006) 034016}}}","f");
   //entry=leg->AddEntry("NULL","LHC","f");   
   //entry=leg->AddEntry("NULL","#splitline{Phys.Rev.D71 (2005) 054013}{Phys.Rev.D73 (2006) 034016}","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextSize(0.028);   

   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4364872,0.94,0.5635128,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->Draw();
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
