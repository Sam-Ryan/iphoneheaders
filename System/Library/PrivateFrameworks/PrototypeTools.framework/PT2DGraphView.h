/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, PT2DGraphAxisStyle, UIColor, NSMutableArray;

@interface PT2DGraphView : UIView {

	NSArray* _provisionalData;
	double _xminimum;
	double _yminimum;
	double _xmaximum;
	double _ymaximum;
	PT2DGraphAxisStyle* _xaxisStyle;
	PT2DGraphAxisStyle* _yaxisStyle;
	UIColor* _groundColor;
	UIColor* _dataColor;
	UIColor* _provisionalDataColor;
	NSArray* _data;
	NSMutableArray* _provisionalDataSubviews;
	CGPoint _origin;
	CGSize _datumSize;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) double xminimum;                                       //@synthesize xminimum=_xminimum - In the implementation block
@property (assign,nonatomic) double yminimum;                                       //@synthesize yminimum=_yminimum - In the implementation block
@property (assign,nonatomic) double xmaximum;                                       //@synthesize xmaximum=_xmaximum - In the implementation block
@property (assign,nonatomic) double ymaximum;                                       //@synthesize ymaximum=_ymaximum - In the implementation block
@property (assign,nonatomic) CGPoint origin;                                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) PT2DGraphAxisStyle * xaxisStyle;                       //@synthesize xaxisStyle=_xaxisStyle - In the implementation block
@property (nonatomic,retain) PT2DGraphAxisStyle * yaxisStyle;                       //@synthesize yaxisStyle=_yaxisStyle - In the implementation block
@property (nonatomic,retain) UIColor * groundColor;                                 //@synthesize groundColor=_groundColor - In the implementation block
@property (nonatomic,retain) UIColor * dataColor;                                   //@synthesize dataColor=_dataColor - In the implementation block
@property (nonatomic,retain) UIColor * provisionalDataColor;                        //@synthesize provisionalDataColor=_provisionalDataColor - In the implementation block
@property (assign,nonatomic) CGSize datumSize;                                      //@synthesize datumSize=_datumSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                               //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSArray * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * provisionalData;                             //@synthesize provisionalData=_provisionalData - In the implementation block
@property (nonatomic,retain) NSMutableArray * provisionalDataSubviews;              //@synthesize provisionalDataSubviews=_provisionalDataSubviews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)datumSize;
-(UIColor *)provisionalDataColor;
-(void)setXaxisStyle:(PT2DGraphAxisStyle *)arg1 ;
-(void)setYaxisStyle:(PT2DGraphAxisStyle *)arg1 ;
-(void)setGroundColor:(UIColor *)arg1 ;
-(void)setDataColor:(UIColor *)arg1 ;
-(void)setProvisionalDataColor:(UIColor *)arg1 ;
-(void)setDatumSize:(CGSize)arg1 ;
-(void)setXminimum:(double)arg1 ;
-(void)setXmaximum:(double)arg1 ;
-(void)setYminimum:(double)arg1 ;
-(void)setYmaximum:(double)arg1 ;
-(void)setProvisionalDataSubviews:(NSMutableArray *)arg1 ;
-(double)xmaximum;
-(double)xminimum;
-(double)ymaximum;
-(double)yminimum;
-(NSMutableArray *)provisionalDataSubviews;
-(PT2DGraphAxisStyle *)xaxisStyle;
-(UIColor *)groundColor;
-(CGPoint)pointForText:(id)arg1 centeredOnPoint:(CGPoint)arg2 withAttributes:(id)arg3 ;
-(PT2DGraphAxisStyle *)yaxisStyle;
-(UIColor *)dataColor;
-(void)setProvisionalData:(NSArray *)arg1 ;
-(NSArray *)provisionalData;
@end

