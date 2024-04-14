/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsigntemplatepackagesignermembership
 */

#ifndef Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload_H
#define Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload : public Object {
public:
    Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload();
    Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload(QString json);
    ~Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsigntemplatepackagesignermembershipId() const;
    void setAPkiEzsigntemplatepackagesignermembershipId(const QList<qint32> &a_pki_ezsigntemplatepackagesignermembership_id);
    bool is_a_pki_ezsigntemplatepackagesignermembership_id_Set() const;
    bool is_a_pki_ezsigntemplatepackagesignermembership_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsigntemplatepackagesignermembership_id;
    bool m_a_pki_ezsigntemplatepackagesignermembership_id_isSet;
    bool m_a_pki_ezsigntemplatepackagesignermembership_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload)

#endif // Ezsigntemplatepackagesignermembership_createObject_v1_Response_mPayload_H
