/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsigntemplatedocumentpagerecognition
 */

#ifndef Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload_H
#define Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload : public Object {
public:
    Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload();
    Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload(QString json);
    ~Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsigntemplatedocumentpagerecognitionId() const;
    void setAPkiEzsigntemplatedocumentpagerecognitionId(const QList<qint32> &a_pki_ezsigntemplatedocumentpagerecognition_id);
    bool is_a_pki_ezsigntemplatedocumentpagerecognition_id_Set() const;
    bool is_a_pki_ezsigntemplatedocumentpagerecognition_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsigntemplatedocumentpagerecognition_id;
    bool m_a_pki_ezsigntemplatedocumentpagerecognition_id_isSet;
    bool m_a_pki_ezsigntemplatedocumentpagerecognition_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload)

#endif // Ezsigntemplatedocumentpagerecognition_createObject_v1_Response_mPayload_H
