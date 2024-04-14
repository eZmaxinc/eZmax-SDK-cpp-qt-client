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
 * Ezsignsigner_Response.h
 *
 * An Ezsignsigner Object
 */

#ifndef Ezsignsigner_Response_H
#define Ezsignsigner_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignsigner_Response : public Object {
public:
    Ezsignsigner_Response();
    Ezsignsigner_Response(QString json);
    ~Ezsignsigner_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignerId() const;
    void setPkiEzsignsignerId(const qint32 &pki_ezsignsigner_id);
    bool is_pki_ezsignsigner_id_Set() const;
    bool is_pki_ezsignsigner_id_Valid() const;

    qint32 getFkiTaxassignmentId() const;
    void setFkiTaxassignmentId(const qint32 &fki_taxassignment_id);
    bool is_fki_taxassignment_id_Set() const;
    bool is_fki_taxassignment_id_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    qint32 getFkiUserlogintypeId() const;
    void setFkiUserlogintypeId(const qint32 &fki_userlogintype_id);
    bool is_fki_userlogintype_id_Set() const;
    bool is_fki_userlogintype_id_Valid() const;

    QString getSUserlogintypeDescriptionX() const;
    void setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x);
    bool is_s_userlogintype_description_x_Set() const;
    bool is_s_userlogintype_description_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsigner_id;
    bool m_pki_ezsignsigner_id_isSet;
    bool m_pki_ezsignsigner_id_isValid;

    qint32 m_fki_taxassignment_id;
    bool m_fki_taxassignment_id_isSet;
    bool m_fki_taxassignment_id_isValid;

    qint32 m_fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    qint32 m_fki_userlogintype_id;
    bool m_fki_userlogintype_id_isSet;
    bool m_fki_userlogintype_id_isValid;

    QString m_s_userlogintype_description_x;
    bool m_s_userlogintype_description_x_isSet;
    bool m_s_userlogintype_description_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsigner_Response)

#endif // Ezsignsigner_Response_H
