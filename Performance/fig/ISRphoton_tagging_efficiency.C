void ISRphoton_tagging_efficiency()
{
//=========Macro generated from canvas: c1/
//=========  (Fri May 31 14:39:24 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,40,1000,800);
   gStyle->SetOptStat(0);
   c1->Range(0.3666667,-2.47413,1.033333,0.1599252);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.2);
   c1->SetRightMargin(0.035);
   c1->SetTopMargin(0.045);
   c1->SetBottomMargin(0.18);
   c1->SetFrameFillStyle(0);
   c1->SetFrameLineWidth(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderSize(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameLineWidth(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderSize(0);
   
   Double_t Graph0_fx1[23] = {
   0,
   3.61259e-05,
   0.00498537,
   0.454716,
   0.52126,
   0.562335,
   0.614682,
   0.651855,
   0.692605,
   0.828221,
   0.949279,
   0.975398,
   0.98042,
   0.984177,
   0.987681,
   0.990896,
   0.993895,
   0.995954,
   0.997543,
   0.998844,
   0.999241,
   0.999747,
   1};
   Double_t Graph0_fy1[23] = {
   0,
   0,
   0.000475127,
   0.0203496,
   0.0236653,
   0.0260005,
   0.029195,
   0.0320154,
   0.0350583,
   0.0424783,
   0.0500399,
   0.0534467,
   0.056166,
   0.0600277,
   0.066174,
   0.0749891,
   0.0869785,
   0.0979974,
   0.117771,
   0.1668,
   0.219812,
   0.323056,
   1};
   TGraph *graph = new TGraph(23,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";signal efficiency; background efficiency");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(7);
   graph->SetMarkerColor(3);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(3);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,0.5,1.01);
   Graph_Graph01->SetMinimum(0.01);
   Graph_Graph01->SetMaximum(1.1);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);
   Graph_Graph01->SetLineStyle(0);
   Graph_Graph01->SetMarkerStyle(7);
   Graph_Graph01->GetXaxis()->SetTitle("signal efficiency");
   Graph_Graph01->GetXaxis()->SetNdivisions(505);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph01->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetTitle(" background efficiency");
   Graph_Graph01->GetYaxis()->SetNdivisions(505);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph01->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph01->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetNdivisions(505);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph01->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph01->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("ac");
   
   Double_t Graph1_fx2[23] = {
   0,
   0,
   0.00456784,
   0.449647,
   0.516023,
   0.557455,
   0.609735,
   0.648098,
   0.688673,
   0.826244,
   0.944686,
   0.973235,
   0.979623,
   0.984584,
   0.987653,
   0.990829,
   0.993719,
   0.99586,
   0.997787,
   0.998929,
   0.999393,
   0.999786,
   1};
   Double_t Graph1_fy2[23] = {
   0,
   0,
   0.000502397,
   0.0188713,
   0.0224718,
   0.0247221,
   0.027726,
   0.0303217,
   0.0336397,
   0.0405267,
   0.0477905,
   0.0508886,
   0.053746,
   0.0587595,
   0.0647673,
   0.0736325,
   0.0870403,
   0.0988152,
   0.119853,
   0.170804,
   0.226801,
   0.332827,
   1};
   graph = new TGraph(23,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(3);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0,1.1);
   Graph_Graph12->SetMinimum(0.0011);
   Graph_Graph12->SetMaximum(1.1);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->SetMarkerStyle(7);
   Graph_Graph12->GetXaxis()->SetNdivisions(505);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetNdivisions(505);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetNdivisions(505);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("c ");
   
   TLegend *leg = new TLegend(0.3436874,0.5219638,0.5621242,0.7028424,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","ILD-L","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(7);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","ILD-S","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.5737475,0.3391082,0.7521042,0.7028026,"br");
   TText *pt_LaTex = pt->AddText("ILD (preliminary)");
   pt_LaTex->SetTextColor(1);
   pt_LaTex->SetTextFont(62);
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
