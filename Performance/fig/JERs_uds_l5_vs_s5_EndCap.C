void IDR_JERs_uds_l5_vs_s5_Endcap()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Dec 18 15:48:24 2019) by ROOT version6.08/06
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",536,229,818,745);
   Canvas_1->Range(-61.2612,1.405405,299.0988,7.486486);
   Canvas_1->SetFillColor(10);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetTickx(1);
   Canvas_1->SetTicky(1);
   Canvas_1->SetLeftMargin(0.17);
   Canvas_1->SetRightMargin(0.08);
   Canvas_1->SetTopMargin(0.08);
   Canvas_1->SetBottomMargin(0.18);
   Canvas_1->SetFrameLineWidth(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameLineWidth(2);
   Canvas_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph0_fy1001[5] = {
   6.331665,
   4.252872,
   3.290661,
   3.074837,
   3.060809};
   Double_t Graph0_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[5] = {
   0.02766529,
   0.01850405,
   0.01446825,
   0.01349508,
   0.01350999};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("IDR-L");
   gre->SetLineColor(4);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph_Graph100310051001 = new TH1F("Graph_Graph_Graph_Graph100310051001","ILD",100,0,273);
   Graph_Graph_Graph_Graph100310051001->SetMinimum(2.5);
   Graph_Graph_Graph_Graph100310051001->SetMaximum(7);
   Graph_Graph_Graph_Graph100310051001->SetDirectory(0);
   Graph_Graph_Graph_Graph100310051001->SetStats(0);
   Graph_Graph_Graph_Graph100310051001->SetLineWidth(2);
   Graph_Graph_Graph_Graph100310051001->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100310051001->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetTitle("E_{jet} [GeV]");
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetRange(1,99);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100310051001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100310051001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100310051001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100310051001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100310051001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100310051001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100310051001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100310051001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100310051001);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.2367387,0.7348587,0.3870334,0.884253,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("IDR");
   pt->Draw();
   
   Double_t Graph1_fx1002[5] = {
   20,
   45.5,
   100,
   175,
   250};
   Double_t Graph1_fy1002[5] = {
   6.37296,
   4.223683,
   3.344245,
   3.205058,
   3.275283};
   Double_t Graph1_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[5] = {
   0.02784572,
   0.01840948,
   0.01467777,
   0.01405795,
   0.01445467};
   gre = new TGraphErrors(5,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("IDR-S");
   gre->SetLineColor(2);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(4);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph_Graph100410061002 = new TH1F("Graph_Graph_Graph_Graph100410061002","IDR-S",100,0,273);
   Graph_Graph_Graph_Graph100410061002->SetMinimum(2.870019);
   Graph_Graph_Graph_Graph100410061002->SetMaximum(6.721786);
   Graph_Graph_Graph_Graph100410061002->SetDirectory(0);
   Graph_Graph_Graph_Graph100410061002->SetStats(0);
   Graph_Graph_Graph_Graph100410061002->SetLineWidth(2);
   Graph_Graph_Graph_Graph100410061002->SetMarkerStyle(20);
   Graph_Graph_Graph_Graph100410061002->SetMarkerSize(0.7);
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetTitle("Jet energy [GeV]");
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100410061002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100410061002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100410061002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100410061002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph_Graph100410061002->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph_Graph_Graph100410061002->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph_Graph_Graph100410061002->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100410061002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100410061002);
   
   gre->Draw("pl");
   
   TLegend *leg = new TLegend(0.4436275,0.3991655,0.8897059,0.7732962,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","|cos(#theta_{thrust})| > 0.7","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","IDR-L","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","IDR-S","lpflpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
