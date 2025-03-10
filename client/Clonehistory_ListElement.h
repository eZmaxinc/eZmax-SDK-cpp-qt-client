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
 * Clonehistory_ListElement.h
 *
 * A Clonehistory List Element
 */

#ifndef Clonehistory_ListElement_H
#define Clonehistory_ListElement_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Clonehistory_ListElement : public Object {
public:
    Clonehistory_ListElement();
    Clonehistory_ListElement(QString json);
    ~Clonehistory_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiClonehistoryId() const;
    void setPkiClonehistoryId(const qint32 &pki_clonehistory_id);
    bool is_pki_clonehistory_id_Set() const;
    bool is_pki_clonehistory_id_Valid() const;

    qint32 getFkiUserIdCloning() const;
    void setFkiUserIdCloning(const qint32 &fki_user_id_cloning);
    bool is_fki_user_id_cloning_Set() const;
    bool is_fki_user_id_cloning_Valid() const;

    qint32 getFkiUserIdCloned() const;
    void setFkiUserIdCloned(const qint32 &fki_user_id_cloned);
    bool is_fki_user_id_cloned_Set() const;
    bool is_fki_user_id_cloned_Valid() const;

    QString getDtClonehistoryFirsthit() const;
    void setDtClonehistoryFirsthit(const QString &dt_clonehistory_firsthit);
    bool is_dt_clonehistory_firsthit_Set() const;
    bool is_dt_clonehistory_firsthit_Valid() const;

    QString getDtClonehistoryLasthit() const;
    void setDtClonehistoryLasthit(const QString &dt_clonehistory_lasthit);
    bool is_dt_clonehistory_lasthit_Set() const;
    bool is_dt_clonehistory_lasthit_Valid() const;

    QString getSUserLoginnameCloning() const;
    void setSUserLoginnameCloning(const QString &s_user_loginname_cloning);
    bool is_s_user_loginname_cloning_Set() const;
    bool is_s_user_loginname_cloning_Valid() const;

    QString getSUserFirstnameCloning() const;
    void setSUserFirstnameCloning(const QString &s_user_firstname_cloning);
    bool is_s_user_firstname_cloning_Set() const;
    bool is_s_user_firstname_cloning_Valid() const;

    QString getSUserLastnameCloning() const;
    void setSUserLastnameCloning(const QString &s_user_lastname_cloning);
    bool is_s_user_lastname_cloning_Set() const;
    bool is_s_user_lastname_cloning_Valid() const;

    QString getSUserLoginnameCloned() const;
    void setSUserLoginnameCloned(const QString &s_user_loginname_cloned);
    bool is_s_user_loginname_cloned_Set() const;
    bool is_s_user_loginname_cloned_Valid() const;

    QString getSUserFirstnameCloned() const;
    void setSUserFirstnameCloned(const QString &s_user_firstname_cloned);
    bool is_s_user_firstname_cloned_Set() const;
    bool is_s_user_firstname_cloned_Valid() const;

    QString getSUserLastnameCloned() const;
    void setSUserLastnameCloned(const QString &s_user_lastname_cloned);
    bool is_s_user_lastname_cloned_Set() const;
    bool is_s_user_lastname_cloned_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_clonehistory_id;
    bool m_pki_clonehistory_id_isSet;
    bool m_pki_clonehistory_id_isValid;

    qint32 m_fki_user_id_cloning;
    bool m_fki_user_id_cloning_isSet;
    bool m_fki_user_id_cloning_isValid;

    qint32 m_fki_user_id_cloned;
    bool m_fki_user_id_cloned_isSet;
    bool m_fki_user_id_cloned_isValid;

    QString m_dt_clonehistory_firsthit;
    bool m_dt_clonehistory_firsthit_isSet;
    bool m_dt_clonehistory_firsthit_isValid;

    QString m_dt_clonehistory_lasthit;
    bool m_dt_clonehistory_lasthit_isSet;
    bool m_dt_clonehistory_lasthit_isValid;

    QString m_s_user_loginname_cloning;
    bool m_s_user_loginname_cloning_isSet;
    bool m_s_user_loginname_cloning_isValid;

    QString m_s_user_firstname_cloning;
    bool m_s_user_firstname_cloning_isSet;
    bool m_s_user_firstname_cloning_isValid;

    QString m_s_user_lastname_cloning;
    bool m_s_user_lastname_cloning_isSet;
    bool m_s_user_lastname_cloning_isValid;

    QString m_s_user_loginname_cloned;
    bool m_s_user_loginname_cloned_isSet;
    bool m_s_user_loginname_cloned_isValid;

    QString m_s_user_firstname_cloned;
    bool m_s_user_firstname_cloned_isSet;
    bool m_s_user_firstname_cloned_isValid;

    QString m_s_user_lastname_cloned;
    bool m_s_user_lastname_cloned_isSet;
    bool m_s_user_lastname_cloned_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Clonehistory_ListElement)

#endif // Clonehistory_ListElement_H
