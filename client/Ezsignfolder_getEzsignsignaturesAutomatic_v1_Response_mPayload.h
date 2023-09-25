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
 * Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignsignaturesAutomatic
 */

#ifndef Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload_H
#define Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_EzsignfolderEzsignsignaturesAutomatic_Response.h"
#include "Field_eEzsignsignatureType.h"
#include <QList>
#include <QSet>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_EzsignfolderEzsignsignaturesAutomatic_Response;

class Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload : public Object {
public:
    Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload();
    Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload(QString json);
    ~Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QSet<Field_eEzsignsignatureType> getAEEzsignsignatureType() const;
    void setAEEzsignsignatureType(const QSet<Field_eEzsignsignatureType> &a_e_ezsignsignature_type);
    bool is_a_e_ezsignsignature_type_Set() const;
    bool is_a_e_ezsignsignature_type_Valid() const;

    QList<Custom_EzsignfolderEzsignsignaturesAutomatic_Response> getAObjEzsignfolder() const;
    void setAObjEzsignfolder(const QList<Custom_EzsignfolderEzsignsignaturesAutomatic_Response> &a_obj_ezsignfolder);
    bool is_a_obj_ezsignfolder_Set() const;
    bool is_a_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QSet<Field_eEzsignsignatureType> m_a_e_ezsignsignature_type;
    bool m_a_e_ezsignsignature_type_isSet;
    bool m_a_e_ezsignsignature_type_isValid;

    QList<Custom_EzsignfolderEzsignsignaturesAutomatic_Response> m_a_obj_ezsignfolder;
    bool m_a_obj_ezsignfolder_isSet;
    bool m_a_obj_ezsignfolder_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload)

#endif // Ezsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload_H
