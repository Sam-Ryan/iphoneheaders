/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LargeMonthWeekViewDelegate <NSObject>
@optional
-(void)largeMonthWeekView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
-(void)largeMonthWeekView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
-(void)largeMonthWeekView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
-(void)largeMonthWeekView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
-(void)didCompleteBackgroundOccurrenceRenderingForLargeMonthWeekView:(id)arg1;

@required
-(void)largeMonthWeekView:(id)arg1 didTapOccurrence:(id)arg2 onDay:(id)arg3;
-(void)largeMonthWeekView:(id)arg1 didDoubleTapOnDay:(id)arg2;

@end

