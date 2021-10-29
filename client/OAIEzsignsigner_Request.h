/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsigner_Request.h
 *
 * An Ezsignsigner Object
 */

#ifndef OAIEzsignsigner_Request_H
#define OAIEzsignsigner_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsigner_Request : public OAIObject {
public:
    OAIEzsignsigner_Request();
    OAIEzsignsigner_Request(QString json);
    ~OAIEzsignsigner_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiTaxassignmentId() const;
    void setFkiTaxassignmentId(const qint32 &fki_taxassignment_id);
    bool is_fki_taxassignment_id_Set() const;
    bool is_fki_taxassignment_id_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    QString getEEzsignsignerLogintype() const;
    void setEEzsignsignerLogintype(const QString &e_ezsignsigner_logintype);
    bool is_e_ezsignsigner_logintype_Set() const;
    bool is_e_ezsignsigner_logintype_Valid() const;

    QString getSEzsignsignerSecretanswer() const;
    void setSEzsignsignerSecretanswer(const QString &s_ezsignsigner_secretanswer);
    bool is_s_ezsignsigner_secretanswer_Set() const;
    bool is_s_ezsignsigner_secretanswer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_taxassignment_id;
    bool m_fki_taxassignment_id_isSet;
    bool m_fki_taxassignment_id_isValid;

    qint32 fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    QString e_ezsignsigner_logintype;
    bool m_e_ezsignsigner_logintype_isSet;
    bool m_e_ezsignsigner_logintype_isValid;

    QString s_ezsignsigner_secretanswer;
    bool m_s_ezsignsigner_secretanswer_isSet;
    bool m_s_ezsignsigner_secretanswer_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsigner_Request)

#endif // OAIEzsignsigner_Request_H
