void kaonIDeff_v2()
{
//=========Macro generated from canvas: canvas0/canvas0
//=========  (Thu Apr 25 15:21:58 2019) by ROOT version 6.11/01
   TCanvas *canvas0 = new TCanvas("canvas0", "canvas0",1345,280,1000,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas0->Range(0.278481,0.5189873,1.037975,1.025316);
   canvas0->SetFillColor(0);
   canvas0->SetBorderMode(0);
   canvas0->SetBorderSize(2);
   canvas0->SetTickx(1);
   canvas0->SetTicky(1);
   canvas0->SetLeftMargin(0.16);
   canvas0->SetRightMargin(0.05);
   canvas0->SetTopMargin(0.05);
   canvas0->SetBottomMargin(0.16);
   canvas0->SetFrameBorderMode(0);
   canvas0->SetFrameBorderMode(0);
   
   Double_t eff_pur_l5_fx1[11] = {
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9,
   0.95};
   Double_t eff_pur_l5_fy1[11] = {
   0.8823129,
   0.8767857,
   0.8717711,
   0.8666724,
   0.8608655,
   0.8521855,
   0.8449278,
   0.8346087,
   0.8227329,
   0.8108222,
   0.7954818};
   TGraph *graph = new TGraph(11,eff_pur_l5_fx1,eff_pur_l5_fy1);
   graph->SetName("eff_pur_l5");
   graph->SetTitle("Kaon ID");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.1);
   
   TH1F *Graph_eff_pur_l51 = new TH1F("Graph_eff_pur_l51","Kaon ID",100,0.4,1);
   Graph_eff_pur_l51->SetMinimum(0.6);
   Graph_eff_pur_l51->SetMaximum(1);
   Graph_eff_pur_l51->SetDirectory(0);
   Graph_eff_pur_l51->SetStats(0);
   Graph_eff_pur_l51->SetLineWidth(2);
   Graph_eff_pur_l51->SetMarkerStyle(20);
   Graph_eff_pur_l51->SetMarkerSize(1.5);
   Graph_eff_pur_l51->GetXaxis()->SetTitle("Kaon ID efficiency");
   Graph_eff_pur_l51->GetXaxis()->SetLabelFont(42);
   Graph_eff_pur_l51->GetXaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_l51->GetXaxis()->SetTitleSize(0.05);
   Graph_eff_pur_l51->GetXaxis()->SetTitleOffset(1.1);
   Graph_eff_pur_l51->GetXaxis()->SetTitleFont(42);
   Graph_eff_pur_l51->GetYaxis()->SetTitle("Kaon ID purity");
   Graph_eff_pur_l51->GetYaxis()->SetLabelFont(42);
   Graph_eff_pur_l51->GetYaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_l51->GetYaxis()->SetTitleSize(0.05);
   Graph_eff_pur_l51->GetYaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_l51->GetYaxis()->SetTitleFont(42);
   Graph_eff_pur_l51->GetZaxis()->SetLabelFont(42);
   Graph_eff_pur_l51->GetZaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_l51->GetZaxis()->SetTitleSize(0.05);
   Graph_eff_pur_l51->GetZaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_l51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_eff_pur_l51);
   
   graph->Draw("ac");
   
   Double_t eff_pur_s5_fx2[11] = {
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9,
   0.95};
   Double_t eff_pur_s5_fy2[11] = {
   0.817337,
   0.8148792,
   0.8089677,
   0.8031288,
   0.7949094,
   0.7872384,
   0.7781183,
   0.7671992,
   0.7566909,
   0.7453988,
   0.7300287};
   graph = new TGraph(11,eff_pur_s5_fx2,eff_pur_s5_fy2);
   graph->SetName("eff_pur_s5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.1);
   
   TH1F *Graph_eff_pur_s52 = new TH1F("Graph_eff_pur_s52","Graph",100,0.4,1);
   Graph_eff_pur_s52->SetMinimum(0.7212979);
   Graph_eff_pur_s52->SetMaximum(0.8260678);
   Graph_eff_pur_s52->SetDirectory(0);
   Graph_eff_pur_s52->SetStats(0);
   Graph_eff_pur_s52->SetLineWidth(2);
   Graph_eff_pur_s52->SetMarkerStyle(20);
   Graph_eff_pur_s52->SetMarkerSize(1.5);
   Graph_eff_pur_s52->GetXaxis()->SetLabelFont(42);
   Graph_eff_pur_s52->GetXaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_s52->GetXaxis()->SetTitleSize(0.05);
   Graph_eff_pur_s52->GetXaxis()->SetTitleOffset(1.1);
   Graph_eff_pur_s52->GetXaxis()->SetTitleFont(42);
   Graph_eff_pur_s52->GetYaxis()->SetLabelFont(42);
   Graph_eff_pur_s52->GetYaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_s52->GetYaxis()->SetTitleSize(0.05);
   Graph_eff_pur_s52->GetYaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_s52->GetYaxis()->SetTitleFont(42);
   Graph_eff_pur_s52->GetZaxis()->SetLabelFont(42);
   Graph_eff_pur_s52->GetZaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_s52->GetZaxis()->SetTitleSize(0.05);
   Graph_eff_pur_s52->GetZaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_s52->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_eff_pur_s52);
   
   graph->Draw("c");
   
   Double_t eff_pur_l5_ttbar_fx3[11] = {
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9,
   0.95};
   Double_t eff_pur_l5_ttbar_fy3[11] = {
   0.9315213,
   0.9290097,
   0.9252387,
   0.9200321,
   0.9133457,
   0.9052874,
   0.8978624,
   0.8886716,
   0.8740872,
   0.8605583,
   0.8467333};
   graph = new TGraph(11,eff_pur_l5_ttbar_fx3,eff_pur_l5_ttbar_fy3);
   graph->SetName("eff_pur_l5_ttbar");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetLineWidth(6);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.1);
   
   TH1F *Graph_eff_pur_l5_ttbar3 = new TH1F("Graph_eff_pur_l5_ttbar3","Graph",100,0.4,1);
   Graph_eff_pur_l5_ttbar3->SetMinimum(0.8382545);
   Graph_eff_pur_l5_ttbar3->SetMaximum(0.9400001);
   Graph_eff_pur_l5_ttbar3->SetDirectory(0);
   Graph_eff_pur_l5_ttbar3->SetStats(0);
   Graph_eff_pur_l5_ttbar3->SetLineWidth(2);
   Graph_eff_pur_l5_ttbar3->SetMarkerStyle(20);
   Graph_eff_pur_l5_ttbar3->SetMarkerSize(1.5);
   Graph_eff_pur_l5_ttbar3->GetXaxis()->SetLabelFont(42);
   Graph_eff_pur_l5_ttbar3->GetXaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_l5_ttbar3->GetXaxis()->SetTitleSize(0.05);
   Graph_eff_pur_l5_ttbar3->GetXaxis()->SetTitleOffset(1.1);
   Graph_eff_pur_l5_ttbar3->GetXaxis()->SetTitleFont(42);
   Graph_eff_pur_l5_ttbar3->GetYaxis()->SetLabelFont(42);
   Graph_eff_pur_l5_ttbar3->GetYaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_l5_ttbar3->GetYaxis()->SetTitleSize(0.05);
   Graph_eff_pur_l5_ttbar3->GetYaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_l5_ttbar3->GetYaxis()->SetTitleFont(42);
   Graph_eff_pur_l5_ttbar3->GetZaxis()->SetLabelFont(42);
   Graph_eff_pur_l5_ttbar3->GetZaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_l5_ttbar3->GetZaxis()->SetTitleSize(0.05);
   Graph_eff_pur_l5_ttbar3->GetZaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_l5_ttbar3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_eff_pur_l5_ttbar3);
   
   graph->Draw("c");
   
   Double_t eff_pur_s5_ttbar_fx4[11] = {
   0.45,
   0.5,
   0.55,
   0.6,
   0.65,
   0.7,
   0.75,
   0.8,
   0.85,
   0.9,
   0.95};
   Double_t eff_pur_s5_ttbar_fy4[11] = {
   0.8727593,
   0.8707151,
   0.8673469,
   0.8595644,
   0.8504574,
   0.8418266,
   0.8301433,
   0.8184502,
   0.8051537,
   0.7909395,
   0.7756448};
   graph = new TGraph(11,eff_pur_s5_ttbar_fx4,eff_pur_s5_ttbar_fy4);
   graph->SetName("eff_pur_s5_ttbar");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(6);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.1);
   
   TH1F *Graph_eff_pur_s5_ttbar4 = new TH1F("Graph_eff_pur_s5_ttbar4","Graph",100,0.4,1);
   Graph_eff_pur_s5_ttbar4->SetMinimum(0.7659333);
   Graph_eff_pur_s5_ttbar4->SetMaximum(0.8824708);
   Graph_eff_pur_s5_ttbar4->SetDirectory(0);
   Graph_eff_pur_s5_ttbar4->SetStats(0);
   Graph_eff_pur_s5_ttbar4->SetLineWidth(2);
   Graph_eff_pur_s5_ttbar4->SetMarkerStyle(20);
   Graph_eff_pur_s5_ttbar4->SetMarkerSize(1.5);
   Graph_eff_pur_s5_ttbar4->GetXaxis()->SetLabelFont(42);
   Graph_eff_pur_s5_ttbar4->GetXaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_s5_ttbar4->GetXaxis()->SetTitleSize(0.05);
   Graph_eff_pur_s5_ttbar4->GetXaxis()->SetTitleOffset(1.1);
   Graph_eff_pur_s5_ttbar4->GetXaxis()->SetTitleFont(42);
   Graph_eff_pur_s5_ttbar4->GetYaxis()->SetLabelFont(42);
   Graph_eff_pur_s5_ttbar4->GetYaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_s5_ttbar4->GetYaxis()->SetTitleSize(0.05);
   Graph_eff_pur_s5_ttbar4->GetYaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_s5_ttbar4->GetYaxis()->SetTitleFont(42);
   Graph_eff_pur_s5_ttbar4->GetZaxis()->SetLabelFont(42);
   Graph_eff_pur_s5_ttbar4->GetZaxis()->SetLabelOffset(0.015);
   Graph_eff_pur_s5_ttbar4->GetZaxis()->SetTitleSize(0.05);
   Graph_eff_pur_s5_ttbar4->GetZaxis()->SetTitleOffset(1.3);
   Graph_eff_pur_s5_ttbar4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_eff_pur_s5_ttbar4);
   
   graph->Draw("c");
   TLatex *   tex = new TLatex(0.8,0.85,"ILD");
tex->SetNDC();
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.905,0.85,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.23,0.25,0.53,0.5,NULL,"brNDC");
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("eff_pur_l5","IDR-L b#bar{b} @ 500GeV","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff_pur_s5","IDR-S b#bar{b} @ 500GeV","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff_pur_l5_ttbar","IDR-L t#bar{t} @ 500GeV","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("eff_pur_s5_ttbar","IDR-S t#bar{t} @ 500GeV","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvas0->Modified();
   canvas0->cd();
   canvas0->SetSelected(canvas0);
}
