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
 * OAIEzsigntemplatedocument_ResponseCompound.h
 *
 * A Ezsigntemplatedocument Object
 */

#ifndef OAIEzsigntemplatedocument_ResponseCompound_H
#define OAIEzsigntemplatedocument_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsigntemplatedocument_ResponseCompound : public OAIObject {
public:
    OAIEzsigntemplatedocument_ResponseCompound();
    OAIEzsigntemplatedocument_ResponseCompound(QString json);
    ~OAIEzsigntemplatedocument_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatedocumentId() const;
    void setPkiEzsigntemplatedocumentId(const qint32 &pki_ezsigntemplatedocument_id);
    bool is_pki_ezsigntemplatedocument_id_Set() const;
    bool is_pki_ezsigntemplatedocument_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    QString getSEzsigntemplatedocumentName() const;
    void setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name);
    bool is_s_ezsigntemplatedocument_name_Set() const;
    bool is_s_ezsigntemplatedocument_name_Valid() const;

    qint32 getIEzsigntemplatedocumentPagetotal() const;
    void setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal);
    bool is_i_ezsigntemplatedocument_pagetotal_Set() const;
    bool is_i_ezsigntemplatedocument_pagetotal_Valid() const;

    qint32 getIEzsigntemplatedocumentSignaturetotal() const;
    void setIEzsigntemplatedocumentSignaturetotal(const qint32 &i_ezsigntemplatedocument_signaturetotal);
    bool is_i_ezsigntemplatedocument_signaturetotal_Set() const;
    bool is_i_ezsigntemplatedocument_signaturetotal_Valid() const;

    bool isBEzsigntemplatedocumentHassignedsignatures() const;
    void setBEzsigntemplatedocumentHassignedsignatures(const bool &b_ezsigntemplatedocument_hassignedsignatures);
    bool is_b_ezsigntemplatedocument_hassignedsignatures_Set() const;
    bool is_b_ezsigntemplatedocument_hassignedsignatures_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatedocument_id;
    bool m_pki_ezsigntemplatedocument_id_isSet;
    bool m_pki_ezsigntemplatedocument_id_isValid;

    qint32 m_fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    QString m_s_ezsigntemplatedocument_name;
    bool m_s_ezsigntemplatedocument_name_isSet;
    bool m_s_ezsigntemplatedocument_name_isValid;

    qint32 m_i_ezsigntemplatedocument_pagetotal;
    bool m_i_ezsigntemplatedocument_pagetotal_isSet;
    bool m_i_ezsigntemplatedocument_pagetotal_isValid;

    qint32 m_i_ezsigntemplatedocument_signaturetotal;
    bool m_i_ezsigntemplatedocument_signaturetotal_isSet;
    bool m_i_ezsigntemplatedocument_signaturetotal_isValid;

    bool m_b_ezsigntemplatedocument_hassignedsignatures;
    bool m_b_ezsigntemplatedocument_hassignedsignatures_isSet;
    bool m_b_ezsigntemplatedocument_hassignedsignatures_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigntemplatedocument_ResponseCompound)

#endif // OAIEzsigntemplatedocument_ResponseCompound_H
