void drawpexpresults0()
{
//=========Macro generated from canvas: c2/c2
//=========  (Thu Jul 25 11:25:10 2019) by ROOT version6.08/06
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,400,400);
   gStyle->SetOptStat(0);
   c2->Range(-1.2,-0.5555555,8.8,2.222222);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.17);
   c2->SetRightMargin(0.23);
   c2->SetTopMargin(0.08);
   c2->SetBottomMargin(0.2);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   
   TH2F *prec__705 = new TH2F("prec__705","",6,0.5,6.5,10,0,5);
   prec__705->SetStats(0);
   prec__705->SetLineWidth(2);
   prec__705->SetMarkerStyle(20);
   prec__705->SetMarkerSize(1.5);
   prec__705->GetXaxis()->SetBinLabel(1,"MC-optimal");
   prec__705->GetXaxis()->SetBinLabel(2,"MC-approx (no Sel/no Bg)");
   prec__705->GetXaxis()->SetBinLabel(3,"MC-approx (Sel/no Bg)");
   prec__705->GetXaxis()->SetBinLabel(4,"cheat ECAL (Sel/no Bg)");
   prec__705->GetXaxis()->SetBinLabel(5,"no cheat (Sel/no Bg)");
   prec__705->GetXaxis()->SetBinLabel(6,"no cheat (Sel/Bg)");
   prec__705->GetXaxis()->SetNdivisions(506);
   prec__705->GetXaxis()->SetLabelFont(42);
   prec__705->GetXaxis()->SetLabelOffset(0.015);
   prec__705->GetXaxis()->SetLabelSize(0.06);
   prec__705->GetXaxis()->SetTitleSize(0.07);
   prec__705->GetXaxis()->SetTitleFont(42);
   prec__705->GetYaxis()->SetTitle("polarisation precision [%]");
   prec__705->GetYaxis()->SetRange(1,4);
   prec__705->GetYaxis()->SetNdivisions(506);
   prec__705->GetYaxis()->SetLabelFont(42);
   prec__705->GetYaxis()->SetLabelOffset(0.015);
   prec__705->GetYaxis()->SetLabelSize(0.06);
   prec__705->GetYaxis()->SetTitleSize(0.07);
   prec__705->GetYaxis()->SetTitleOffset(1.1);
   prec__705->GetYaxis()->SetTitleFont(42);
   prec__705->GetZaxis()->SetLabelFont(42);
   prec__705->GetZaxis()->SetLabelOffset(0.015);
   prec__705->GetZaxis()->SetLabelSize(0.06);
   prec__705->GetZaxis()->SetTitleSize(0.07);
   prec__705->GetZaxis()->SetTitleOffset(1.1);
   prec__705->GetZaxis()->SetTitleFont(42);
   prec__705->Draw("");
   
   Double_t Graph0_fx1[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1[6] = {
   0.3045866,
   0.3988778,
   0.4862136,
   0.5458476,
   0.65269,
   0.7004324};
   TGraph *graph = new TGraph(6,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.5,6.5);
   Graph_Graph1->SetMinimum(0.265002);
   Graph_Graph1->SetMaximum(0.7400169);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->SetMarkerSize(1.5);
   Graph_Graph1->GetXaxis()->SetNdivisions(506);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetNdivisions(506);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("pl");
   
   Double_t Graph1_fx2[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph1_fy2[6] = {
   0.3045866,
   0.3988778,
   0.4647694,
   0.5776238,
   0.6588386,
   0.70883};
   graph = new TGraph(6,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.5,6.5);
   Graph_Graph2->SetMinimum(0.2641622);
   Graph_Graph2->SetMaximum(0.7492543);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->SetMarkerSize(1.5);
   Graph_Graph2->GetXaxis()->SetNdivisions(506);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetNdivisions(506);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("pl");
   
   Double_t Graph2_fx3[5] = {
   1,
   2,
   3,
   5,
   6};
   Double_t Graph2_fy3[5] = {
   0.4253454,
   0.417477,
   0.5055288,
   0.7852546,
   0.8508048};
   graph = new TGraph(5,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.5,6.5);
   Graph_Graph3->SetMinimum(0.3741442);
   Graph_Graph3->SetMaximum(0.8941376);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->SetMarkerSize(1.5);
   Graph_Graph3->GetXaxis()->SetNdivisions(506);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetNdivisions(506);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("pl");
   
   Double_t Graph3_fx4[5] = {
   1,
   2,
   3,
   5,
   6};
   Double_t Graph3_fy4[5] = {
   0.4253454,
   0.417477,
   0.4956642,
   0.8007621,
   0.8731344};
   graph = new TGraph(5,Graph3_fx4,Graph3_fy4);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.5,6.5);
   Graph_Graph4->SetMinimum(0.3719112);
   Graph_Graph4->SetMaximum(0.9187001);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->SetMarkerSize(1.5);
   Graph_Graph4->GetXaxis()->SetNdivisions(506);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetNdivisions(506);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("pl");
   TText *text = new TText(0.6,0.25,"eLpR");
   text->SetNDC();
   text->SetTextFont(42);
   text->Draw();
   
   TLegend *leg = new TLegend(0.2,0.6,0.5,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph2","#tau #rightarrow #pi IDR-L","pl");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","#tau #rightarrow #pi IDR-S","pl");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","#tau #rightarrow #rho IDR-L","pl");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","#tau #rightarrow #rho IDR-S","pl");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   text = new TText(0.38,0.95,"ILD preliminary");
   text->SetNDC();
   text->SetTextSize(0.06);
   text->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
