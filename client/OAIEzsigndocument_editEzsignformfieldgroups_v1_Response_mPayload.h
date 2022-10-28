/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload.h
 *
 * Payload for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignformfieldgroups
 */

#ifndef OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload_H
#define OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload();
    OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignformfieldgroupId() const;
    void setAPkiEzsignformfieldgroupId(const QList<qint32> &a_pki_ezsignformfieldgroup_id);
    bool is_a_pki_ezsignformfieldgroup_id_Set() const;
    bool is_a_pki_ezsignformfieldgroup_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsignformfieldgroup_id;
    bool m_a_pki_ezsignformfieldgroup_id_isSet;
    bool m_a_pki_ezsignformfieldgroup_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload)

#endif // OAIEzsigndocument_editEzsignformfieldgroups_v1_Response_mPayload_H
