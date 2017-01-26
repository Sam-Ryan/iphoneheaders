/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChart, OADDrawingTheme;

@interface CHAutoStyling : NSObject {

	CHDChart* mChart;
	OADDrawingTheme* mDrawingTheme;

}
+(id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2 ;
-(void)dealloc;
-(id)drawingTheme;
-(id)initWithChart:(id)arg1 drawingTheme:(id)arg2 ;
-(int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1 ;
-(void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 ;
@end

