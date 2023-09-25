/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage
 */

#ifndef OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload_H
#define OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigndocument_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsigndocument_ResponseCompound;

class OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload();
    OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigndocument_ResponseCompound> getAObjEzsigndocument() const;
    void setAObjEzsigndocument(const QList<OAIEzsigndocument_ResponseCompound> &a_obj_ezsigndocument);
    bool is_a_obj_ezsigndocument_Set() const;
    bool is_a_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigndocument_ResponseCompound> m_a_obj_ezsigndocument;
    bool m_a_obj_ezsigndocument_isSet;
    bool m_a_obj_ezsigndocument_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload)

#endif // OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload_H
