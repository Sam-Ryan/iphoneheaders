/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXInterestAreaViewControllerDelegate <NSObject>
@optional
-(void)getInterestAreaPathForFingerPath:(id)arg1 interestAreaViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)interestAreaPathsDidChangeForInterestAreaViewController:(id)arg1;
-(CGRect*)boundsForConstrainingFingerPathInInterestAreaViewController:(id)arg1;
-(id)referenceViewForConvertingFromAndToWindowCoordinateSystemForInterestAreaViewController:(id)arg1;
-(id)viewToCoverWithOutOfBoundsDrawingForInterestAreaViewWithController:(id)arg1 edgeInsets:(UIEdgeInsets*)arg2;
-(double)scaleForSpecialControlsInInterestAreaViewController:(id)arg1;
-(void)interestAreaViewController:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)interestAreaViewController:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
-(BOOL)isInterestAreaViewAccessibilityElementWithController:(id)arg1;

@end

