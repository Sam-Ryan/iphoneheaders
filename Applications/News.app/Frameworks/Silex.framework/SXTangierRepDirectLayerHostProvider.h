/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/TSDRepDirectLayerHostProvider.h>

@class CALayer, NSString;

@interface SXTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider> {

	CALayer* _aboveRepsLayerHost;
	CALayer* _underRepsLayerHost;
	CALayer* _overlayLayerHost;

}

@property (nonatomic,retain) CALayer * aboveRepsLayerHost;              //@synthesize aboveRepsLayerHost=_aboveRepsLayerHost - In the implementation block
@property (nonatomic,retain) CALayer * underRepsLayerHost;              //@synthesize underRepsLayerHost=_underRepsLayerHost - In the implementation block
@property (nonatomic,retain) CALayer * overlayLayerHost;                //@synthesize overlayLayerHost=_overlayLayerHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CALayer *)aboveRepsLayerHost;
-(void)setAboveRepsLayerHost:(CALayer *)arg1 ;
-(CALayer *)underRepsLayerHost;
-(void)setUnderRepsLayerHost:(CALayer *)arg1 ;
-(CALayer *)overlayLayerHost;
-(void)setOverlayLayerHost:(CALayer *)arg1 ;
-(void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg1 ;
-(void)directLayerHostUpdateRepOverlayLayers:(id)arg1 ;
-(void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg1 ;
-(id)directLayerHostForRep:(id)arg1 ;
@end

