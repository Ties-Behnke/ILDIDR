void performance_plot()
{
//=========Macro generated from canvas: c/
//=========  (Wed May 29 12:08:49 2019) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "",10,626,700,500);
   gStyle->SetOptStat(0);
   c->Range(0.2733333,0.2283784,1.606667,0.9040541);
   c->SetFillColor(10);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.17);
   c->SetRightMargin(0.08);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.18);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,0.5,1.5);
   hframe__1->SetMinimum(0.35);
   hframe__1->SetMaximum(0.85);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->SetLineWidth(2);
   hframe__1->SetMarkerStyle(20);
   hframe__1->GetXaxis()->SetTitle("scale factor of JER relative to IDR-L");
   hframe__1->GetXaxis()->SetNdivisions(506);
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelOffset(0.015);
   hframe__1->GetXaxis()->SetLabelSize(0.05);
   hframe__1->GetXaxis()->SetTitleSize(0.06);
   hframe__1->GetXaxis()->SetTitleOffset(1);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("95% C.L. UL on BR(#font[12]{h#rightarrowinv}) [%]");
   hframe__1->GetYaxis()->SetNdivisions(506);
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelOffset(0.015);
   hframe__1->GetYaxis()->SetLabelSize(0.05);
   hframe__1->GetYaxis()->SetTitleSize(0.06);
   hframe__1->GetYaxis()->SetTitleOffset(1.1);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelOffset(0.015);
   hframe__1->GetZaxis()->SetLabelSize(0.05);
   hframe__1->GetZaxis()->SetTitleSize(0.06);
   hframe__1->GetZaxis()->SetTitleOffset(1.1);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   TLatex *   tex = new TLatex(0.2,0.85,"#bf{ILD}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TLegend *leg = new TLegend(0.175,0.45,0.5,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);

   Double_t Graph_fx1[1] = {
   1};
   Double_t Graph_fy1[1] = {
   0.782};
   TGraph *graph = new TGraph(1,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);

   TLegendEntry *entry=leg->AddEntry("Graph","IDR-L","l");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.9,2.1);
   Graph_Graph1->SetMinimum(0.682);
   Graph_Graph1->SetMaximum(1.882);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetNdivisions(506);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetNdivisions(506);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[1] = {
   1.064286};
   Double_t Graph_fy2[1] = {
   0.788};
   graph = new TGraph(1,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);

   entry=leg->AddEntry("Graph","IDR-S","l");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.9642857,2.164286);
   Graph_Graph2->SetMinimum(0.688);
   Graph_Graph2->SetMaximum(1.888);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetNdivisions(506);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetNdivisions(506);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[1] = {
   1};
   Double_t Graph_fy3[1] = {
   0.741};
   graph = new TGraph(1,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   entry=leg->AddEntry("Graph","full reconstructed","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.9,2.1);
   Graph_Graph3->SetMinimum(0.641);
   Graph_Graph3->SetMaximum(1.841);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->GetXaxis()->SetNdivisions(506);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetNdivisions(506);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[1] = {
   1.064286};
   Double_t Graph_fy4[1] = {
   0.744};
   graph = new TGraph(1,Graph_fx4,Graph_fy4);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   entry=leg->AddEntry("Graph","w/o semi-lep. decays (\"sld\")","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.9642857,2.164286);
   Graph_Graph4->SetMinimum(0.644);
   Graph_Graph4->SetMaximum(1.844);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->GetXaxis()->SetNdivisions(506);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetNdivisions(506);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx5[1] = {
   1};
   Double_t Graph_fy5[1] = {
   0.726};
   graph = new TGraph(1,Graph_fx5,Graph_fy5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.2);
   
   entry=leg->AddEntry("Graph","w/o sld and overlay","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);

   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.9,2.1);
   Graph_Graph5->SetMinimum(0.626);
   Graph_Graph5->SetMaximum(1.826);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineWidth(2);
   Graph_Graph5->SetMarkerStyle(20);
   Graph_Graph5->GetXaxis()->SetNdivisions(506);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleOffset(1);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetNdivisions(506);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx6[1] = {
   1.064286};
   Double_t Graph_fy6[1] = {
   0.731};
   graph = new TGraph(1,Graph_fx6,Graph_fy6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.2);

   entry=leg->AddEntry("Graph","w/o sld, overlay and BS","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.9642857,2.164286);
   Graph_Graph6->SetMinimum(0.631);
   Graph_Graph6->SetMaximum(1.831);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineWidth(2);
   Graph_Graph6->SetMarkerStyle(20);
   Graph_Graph6->GetXaxis()->SetNdivisions(506);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleOffset(1);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetNdivisions(506);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx7[1] = {
   1};
   Double_t Graph_fy7[1] = {
   0.668};
   graph = new TGraph(1,Graph_fx7,Graph_fy7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.2);

   entry=leg->AddEntry("Graph","w/o sld, overlay, BS and ISR","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0.9,2.1);
   Graph_Graph7->SetMinimum(0.568);
   Graph_Graph7->SetMaximum(1.768);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineWidth(2);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->GetXaxis()->SetNdivisions(506);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleOffset(1);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetNdivisions(506);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx8[1] = {
   1.064286};
   Double_t Graph_fy8[1] = {
   0.677};
   graph = new TGraph(1,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0.9642857,2.164286);
   Graph_Graph8->SetMinimum(0.577);
   Graph_Graph8->SetMaximum(1.777);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineWidth(2);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->GetXaxis()->SetNdivisions(506);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleOffset(1);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetNdivisions(506);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx9[9] = {
   0.6,
   0.7,
   0.8,
   0.9,
   1,
   1.1,
   1.2,
   1.3,
   1.4};
   Double_t Graph_fy9[9] = {
   0.4,
   0.426,
   0.451,
   0.471,
   0.497,
   0.511,
   0.534,
   0.549,
   0.565};
   graph = new TGraph(9,Graph_fx9,Graph_fy9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,0.52,1.48);
   Graph_Graph9->SetMinimum(0.3835);
   Graph_Graph9->SetMaximum(0.5815);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineWidth(2);
   Graph_Graph9->SetMarkerStyle(20);
   Graph_Graph9->GetXaxis()->SetNdivisions(506);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetXaxis()->SetTitleOffset(1);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetNdivisions(506);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx10[1] = {
   1};
   Double_t Graph_fy10[1] = {
   0.496};
   graph = new TGraph(1,Graph_fx10,Graph_fy10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(29);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.9,2.1);
   Graph_Graph10->SetMinimum(0.396);
   Graph_Graph10->SetMaximum(1.596);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineWidth(2);
   Graph_Graph10->SetMarkerStyle(20);
   Graph_Graph10->GetXaxis()->SetNdivisions(506);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleOffset(1);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetNdivisions(506);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx11[1] = {
   1.064286};
   Double_t Graph_fy11[1] = {
   0.505};
   graph = new TGraph(1,Graph_fx11,Graph_fy11);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(29);
   graph->SetMarkerSize(1.5);
   
   entry=leg->AddEntry("Graph","IDR-L cheat & smear","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0.9642857,2.164286);
   Graph_Graph11->SetMinimum(0.405);
   Graph_Graph11->SetMaximum(1.605);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineWidth(2);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->GetXaxis()->SetNdivisions(506);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetNdivisions(506);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   multigraph->Add(graph,"");
   multigraph->Draw("PL");
   multigraph->GetXaxis()->SetTitle("scale factor of JER _{(relative to IDR-L)} [30%/#sqrt{E_{j}}]");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("UL_{95% CL} on BR(#font[12]{h#rightarrowinv}) [%]");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.1);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
