void k95_250()
{
//=========Macro generated from canvas: c1/
//=========  (Tue Dec 10 14:00:10 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,45,1024,768);
   gStyle->SetOptStat(0);
   c1->Range(-36.26667,-3.5625,177.0667,0.1875);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[29] = {
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95,
   100,
   105,
   110,
   115,
   120,
   130,
   135,
   140,
   145,
   150,
   155};
   Double_t Graph0_fy1[29] = {
   0.00697894,
   0.00654422,
   0.00574267,
   0.00489614,
   0.00427443,
   0.00390012,
   0.00357848,
   0.00339596,
   0.00313353,
   0.00283628,
   0.00258626,
   0.00297512,
   0.00285211,
   0.00288012,
   0.00319385,
   0.00428173,
   0.0104836,
   0.00887618,
   0.00704016,
   0.00617412,
   0.0058931,
   0.00561983,
   0.00631568,
   0.00795203,
   0.00806416,
   0.00857855,
   0.0104418,
   0.0125708,
   0.0207803};


   for(int i=0;i<29;i++){
       Graph0_fy1[i]=Graph0_fy1[i]*2;
   }
   TGraph *graph = new TGraph(29,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,0,160);
   Graph_Graph01->SetMinimum(0.001);
   Graph_Graph01->SetMaximum(1);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);
   Graph_Graph01->SetLineWidth(2);
   Graph_Graph01->SetMarkerStyle(20);
   Graph_Graph01->SetMarkerSize(0.7);
   Graph_Graph01->GetXaxis()->SetTitle("M_{S^{0}} [GeV]");
   Graph_Graph01->GetXaxis()->SetNdivisions(506);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetTitle("sin^{2}(#theta)");
   Graph_Graph01->GetYaxis()->SetNdivisions(506);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph01->GetYaxis()->SetTitleOffset(1);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph01->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph01->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("ac");
   
   Double_t Graph1_fx2[15] = {
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80};
   Double_t Graph1_fy2[15] = {
   0.089,
   0.09,
   0.1,
   0.11,
   0.17,
   0.28,
   0.35,
   0.5,
   0.54,
   0.6,
   0.6,
   0.51,
   0.54,
   0.65,
   0.9};
   graph = new TGraph(15,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,3,87);
   Graph_Graph12->SetMinimum(0.0079);
   Graph_Graph12->SetMaximum(0.9811);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineWidth(2);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->SetMarkerSize(0.7);
   Graph_Graph12->GetXaxis()->SetNdivisions(506);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetNdivisions(506);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("c");
   
   Double_t Graph2_fx3[29] = {
   10,
   15,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95,
   100,
   105,
   110,
   115,
   120,
   130,
   135,
   140,
   145,
   150,
   155};
   Double_t Graph2_fy3[29] = {
   0.00202314,
   0.00197879,
   0.00194257,
   0.00187728,
   0.00179126,
   0.00184793,
   0.00198801,
   0.00205921,
   0.00211389,
   0.0020641,
   0.00210883,
   0.00233224,
   0.00226612,
   0.00254558,
   0.00303526,
   0.00393851,
   0.00923568,
   0.00810206,
   0.00704016,
   0.00592865,
   0.00569754,
   0.00561983,
   0.00631568,
   0.00795203,
   0.00806416,
   0.00857855,
   0.0104418,
   0.0125708,
   0.0207803};
   for(int i=0;i<29;i++){
       Graph2_fy3[i]=Graph2_fy3[i]*2;
   }

   graph = new TGraph(29,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Graph",100,0,169.5);
   Graph_Graph23->SetMinimum(0.001612134);
   Graph_Graph23->SetMaximum(0.0226792);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);
   Graph_Graph23->SetLineWidth(2);
   Graph_Graph23->SetMarkerStyle(20);
   Graph_Graph23->SetMarkerSize(0.7);
   Graph_Graph23->GetXaxis()->SetNdivisions(506);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph23->GetXaxis()->SetTitleOffset(1);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetNdivisions(506);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph23->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph23->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.5,0.594,0.92,0.86,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Search for extra light scalars S^{0} in e^{+}e^{-} #rightarrow ZS^{0}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","OPAL, Eur.Phys.J. C27 (2003) 311-329","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","ILC250, ILD preliminary (DBD)","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","ILC250, Pythia stable particle level","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();

   TPaveText *pt0 = new TPaveText(126, -2.8, 146, -2.4, "nb");
   TText *pt_LaTex0 = pt0->AddText("ILD");
   pt_LaTex0->SetTextColor(1);
   pt_LaTex0->SetTextFont(62);
   pt0->Draw();



   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
