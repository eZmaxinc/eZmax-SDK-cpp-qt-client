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
 * Custom_Ezsignfoldertype_Response.h
 *
 * A Custom Ezsignfoldertype Object
 */

#ifndef Custom_Ezsignfoldertype_Response_H
#define Custom_Ezsignfoldertype_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Ezsignfoldertype_Response : public Object {
public:
    Custom_Ezsignfoldertype_Response();
    Custom_Ezsignfoldertype_Response(QString json);
    ~Custom_Ezsignfoldertype_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfoldertypeId() const;
    void setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id);
    bool is_pki_ezsignfoldertype_id_Set() const;
    bool is_pki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiFontIdAnnotation() const;
    void setFkiFontIdAnnotation(const qint32 &fki_font_id_annotation);
    bool is_fki_font_id_annotation_Set() const;
    bool is_fki_font_id_annotation_Valid() const;

    qint32 getFkiFontIdFormfield() const;
    void setFkiFontIdFormfield(const qint32 &fki_font_id_formfield);
    bool is_fki_font_id_formfield_Set() const;
    bool is_fki_font_id_formfield_Valid() const;

    qint32 getFkiFontIdSignature() const;
    void setFkiFontIdSignature(const qint32 &fki_font_id_signature);
    bool is_fki_font_id_signature_Set() const;
    bool is_fki_font_id_signature_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    bool isBEzsignfoldertypeSendproofezsignsigner() const;
    void setBEzsignfoldertypeSendproofezsignsigner(const bool &b_ezsignfoldertype_sendproofezsignsigner);
    bool is_b_ezsignfoldertype_sendproofezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_sendproofezsignsigner_Valid() const;

    bool isBEzsignfoldertypeAllowdownloadattachmentezsignsigner() const;
    void setBEzsignfoldertypeAllowdownloadattachmentezsignsigner(const bool &b_ezsignfoldertype_allowdownloadattachmentezsignsigner);
    bool is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Valid() const;

    bool isBEzsignfoldertypeAllowdownloadproofezsignsigner() const;
    void setBEzsignfoldertypeAllowdownloadproofezsignsigner(const bool &b_ezsignfoldertype_allowdownloadproofezsignsigner);
    bool is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Valid() const;

    bool isBEzsignfoldertypeAutomaticsignature() const;
    void setBEzsignfoldertypeAutomaticsignature(const bool &b_ezsignfoldertype_automaticsignature);
    bool is_b_ezsignfoldertype_automaticsignature_Set() const;
    bool is_b_ezsignfoldertype_automaticsignature_Valid() const;

    bool isBEzsignfoldertypeDelegate() const;
    void setBEzsignfoldertypeDelegate(const bool &b_ezsignfoldertype_delegate);
    bool is_b_ezsignfoldertype_delegate_Set() const;
    bool is_b_ezsignfoldertype_delegate_Valid() const;

    bool isBEzsignfoldertypeDiscussion() const;
    void setBEzsignfoldertypeDiscussion(const bool &b_ezsignfoldertype_discussion);
    bool is_b_ezsignfoldertype_discussion_Set() const;
    bool is_b_ezsignfoldertype_discussion_Valid() const;

    bool isBEzsignfoldertypeReassignezsignsigner() const;
    void setBEzsignfoldertypeReassignezsignsigner(const bool &b_ezsignfoldertype_reassignezsignsigner);
    bool is_b_ezsignfoldertype_reassignezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_reassignezsignsigner_Valid() const;

    bool isBEzsignfoldertypeReassignuser() const;
    void setBEzsignfoldertypeReassignuser(const bool &b_ezsignfoldertype_reassignuser);
    bool is_b_ezsignfoldertype_reassignuser_Set() const;
    bool is_b_ezsignfoldertype_reassignuser_Valid() const;

    bool isBEzsignfoldertypeReassigngroup() const;
    void setBEzsignfoldertypeReassigngroup(const bool &b_ezsignfoldertype_reassigngroup);
    bool is_b_ezsignfoldertype_reassigngroup_Set() const;
    bool is_b_ezsignfoldertype_reassigngroup_Valid() const;

    qint32 getIEzsignfoldertypeDeadlinedays() const;
    void setIEzsignfoldertypeDeadlinedays(const qint32 &i_ezsignfoldertype_deadlinedays);
    bool is_i_ezsignfoldertype_deadlinedays_Set() const;
    bool is_i_ezsignfoldertype_deadlinedays_Valid() const;

    qint32 getIEzsignfoldertypeFontsizeannotation() const;
    void setIEzsignfoldertypeFontsizeannotation(const qint32 &i_ezsignfoldertype_fontsizeannotation);
    bool is_i_ezsignfoldertype_fontsizeannotation_Set() const;
    bool is_i_ezsignfoldertype_fontsizeannotation_Valid() const;

    qint32 getIEzsignfoldertypeFontsizeformfield() const;
    void setIEzsignfoldertypeFontsizeformfield(const qint32 &i_ezsignfoldertype_fontsizeformfield);
    bool is_i_ezsignfoldertype_fontsizeformfield_Set() const;
    bool is_i_ezsignfoldertype_fontsizeformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignfoldertype_id;
    bool m_pki_ezsignfoldertype_id_isSet;
    bool m_pki_ezsignfoldertype_id_isValid;

    qint32 m_fki_font_id_annotation;
    bool m_fki_font_id_annotation_isSet;
    bool m_fki_font_id_annotation_isValid;

    qint32 m_fki_font_id_formfield;
    bool m_fki_font_id_formfield_isSet;
    bool m_fki_font_id_formfield_isValid;

    qint32 m_fki_font_id_signature;
    bool m_fki_font_id_signature_isSet;
    bool m_fki_font_id_signature_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    bool m_b_ezsignfoldertype_sendproofezsignsigner;
    bool m_b_ezsignfoldertype_sendproofezsignsigner_isSet;
    bool m_b_ezsignfoldertype_sendproofezsignsigner_isValid;

    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet;
    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid;

    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner;
    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet;
    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid;

    bool m_b_ezsignfoldertype_automaticsignature;
    bool m_b_ezsignfoldertype_automaticsignature_isSet;
    bool m_b_ezsignfoldertype_automaticsignature_isValid;

    bool m_b_ezsignfoldertype_delegate;
    bool m_b_ezsignfoldertype_delegate_isSet;
    bool m_b_ezsignfoldertype_delegate_isValid;

    bool m_b_ezsignfoldertype_discussion;
    bool m_b_ezsignfoldertype_discussion_isSet;
    bool m_b_ezsignfoldertype_discussion_isValid;

    bool m_b_ezsignfoldertype_reassignezsignsigner;
    bool m_b_ezsignfoldertype_reassignezsignsigner_isSet;
    bool m_b_ezsignfoldertype_reassignezsignsigner_isValid;

    bool m_b_ezsignfoldertype_reassignuser;
    bool m_b_ezsignfoldertype_reassignuser_isSet;
    bool m_b_ezsignfoldertype_reassignuser_isValid;

    bool m_b_ezsignfoldertype_reassigngroup;
    bool m_b_ezsignfoldertype_reassigngroup_isSet;
    bool m_b_ezsignfoldertype_reassigngroup_isValid;

    qint32 m_i_ezsignfoldertype_deadlinedays;
    bool m_i_ezsignfoldertype_deadlinedays_isSet;
    bool m_i_ezsignfoldertype_deadlinedays_isValid;

    qint32 m_i_ezsignfoldertype_fontsizeannotation;
    bool m_i_ezsignfoldertype_fontsizeannotation_isSet;
    bool m_i_ezsignfoldertype_fontsizeannotation_isValid;

    qint32 m_i_ezsignfoldertype_fontsizeformfield;
    bool m_i_ezsignfoldertype_fontsizeformfield_isSet;
    bool m_i_ezsignfoldertype_fontsizeformfield_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Ezsignfoldertype_Response)

#endif // Custom_Ezsignfoldertype_Response_H
