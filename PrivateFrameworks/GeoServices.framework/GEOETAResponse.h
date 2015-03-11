/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    NSMutableArray *_etaResults;
    } _has;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    int _status;
}

@property(retain) NSMutableArray * etaResults;
@property(readonly) bool hasOriginPlaceSearchResponse;
@property bool hasStatus;
@property(retain) GEOPlaceSearchResponse * originPlaceSearchResponse;
@property(readonly) struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* problemDetails;
@property(readonly) unsigned long long problemDetailsCount;
@property int status;

- (void)addEtaResult:(id)arg1;
- (void)addProblemDetail:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearEtaResults;
- (void)clearProblemDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (id)etaResults;
- (unsigned long long)etaResultsCount;
- (bool)hasOriginPlaceSearchResponse;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originPlaceSearchResponse;
- (struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned long long)arg1;
- (struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (unsigned long long)problemDetailsCount;
- (bool)readFrom:(id)arg1;
- (void)setEtaResults:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setOriginPlaceSearchResponse:(id)arg1;
- (void)setProblemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end