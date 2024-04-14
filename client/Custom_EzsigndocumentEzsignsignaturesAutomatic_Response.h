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
 * Custom_EzsigndocumentEzsignsignaturesAutomatic_Response.h
 *
 * An Ezsigndocument Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef Custom_EzsigndocumentEzsignsignaturesAutomatic_Response_H
#define Custom_EzsigndocumentEzsignsignaturesAutomatic_Response_H

#include <QJsonObject>

#include "Custom_EzsignsignatureEzsignsignaturesAutomatic_Response.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_EzsignsignatureEzsignsignaturesAutomatic_Response;

class Custom_EzsigndocumentEzsignsignaturesAutomatic_Response : public Object {
public:
    Custom_EzsigndocumentEzsignsignaturesAutomatic_Response();
    Custom_EzsigndocumentEzsignsignaturesAutomatic_Response(QString json);
    ~Custom_EzsigndocumentEzsignsignaturesAutomatic_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigndocumentId() const;
    void setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id);
    bool is_pki_ezsigndocument_id_Set() const;
    bool is_pki_ezsigndocument_id_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    QList<Custom_EzsignsignatureEzsignsignaturesAutomatic_Response> getAObjEzsignsignature() const;
    void setAObjEzsignsignature(const QList<Custom_EzsignsignatureEzsignsignaturesAutomatic_Response> &a_obj_ezsignsignature);
    bool is_a_obj_ezsignsignature_Set() const;
    bool is_a_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigndocument_id;
    bool m_pki_ezsigndocument_id_isSet;
    bool m_pki_ezsigndocument_id_isValid;

    QString m_s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    QList<Custom_EzsignsignatureEzsignsignaturesAutomatic_Response> m_a_obj_ezsignsignature;
    bool m_a_obj_ezsignsignature_isSet;
    bool m_a_obj_ezsignsignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_EzsigndocumentEzsignsignaturesAutomatic_Response)

#endif // Custom_EzsigndocumentEzsignsignaturesAutomatic_Response_H
